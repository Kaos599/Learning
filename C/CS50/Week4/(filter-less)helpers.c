#include "helpers.h"
#include <math.h>


// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i = 0; i < height; i++)
    {
        for (int j =0; j < width; j++)
        {


        int average = round(((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed)/3.0));

        image[i][j].rgbtBlue = average;
        image[i][j].rgbtGreen = average;
        image[i][j].rgbtRed = average;


        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float originalRed = image[i][j].rgbtRed;
            float originalGreen = image[i][j].rgbtGreen;
            float originalBlue = image[i][j].rgbtBlue;
            int sepiaRed = round(.393 * originalRed + .769 * originalGreen + .189 * originalBlue);
            int sepiaGreen = round(.349 * originalRed + .686 * originalGreen + .168 * originalBlue);
            int sepiaBlue = round(.272 * originalRed + .534 * originalGreen + .131 * originalBlue);

            if (sepiaRed > 255) {
                sepiaRed = 255;
            }
            if (sepiaGreen > 255) {
                sepiaGreen = 255;
            }
            if (sepiaBlue > 255) {
                sepiaBlue = 255;
            }

            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}
// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        if (width % 2 == 0)
        {
            for (int j = 0; j < width / 2; j++)
            {
                RGBTRIPLE temp[height][width];
                temp[i][j] = image[i][j];
                image[i][j] = image[i][width - (j + 1)];
                image[i][width - (j + 1)] = temp[i][j];
            }
        }

        else if (width % 2 != 0)
        {
            for (int j = 0; j < (width - 1) / 2; j++)
            {
                RGBTRIPLE temp[height][width];
                temp[i][j] = image[i][j];
                image[i][j] = image[i][width - (j + 1)];
                image[i][width - (j + 1)] = temp[i][j];
            }
        }
    }
    return;
}
// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j =0; j < width; j++)
        {

        temp[i][j] = image[i][j];
        
        }
    }
     for (int i = 0; i < height; i++)
    {
        for (int j =0; j < width; j++)
    {

       int tRed, tGreen, tBlue;
       tRed = tGreen = tBlue = 0;
       float count = 0.00;
       for (int x = -1; x < 2; x++)
       {
        for(int y = -1; y < 2; y++)
        {

            int presentx = i+x;
            int presenty = j+y;

            if (presentx < 0 || presentx > (height-1) || presenty < 0 || presenty > (width-1))
            {
            continue;

            }
            tRed += image[presentx][presenty].rgbtRed;
            tGreen += image[presentx][presenty].rgbtGreen;
            tBlue += image[presentx][presenty].rgbtBlue;


            count++;
         }

          temp[i][j].rgbtRed = round(tRed/count);
          temp[i][j].rgbtGreen = round(tGreen/count);
          temp[i][j].rgbtBlue = round(tBlue/count);
       }
    }
    }

 for (int i = 0; i < height; i++)
 {
    for (int j = 0; j < width; j++)
    {
   image[i][j].rgbtRed = temp[i][j].rgbtRed;
    image[i][j].rgbtGreen = temp[i][j].rgbtGreen;
     image[i][j].rgbtBlue = temp[i][j].rgbtBlue;

    }
 }



    return;
}


