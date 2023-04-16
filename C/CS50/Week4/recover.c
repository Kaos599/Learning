#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
      if(argc!=2)
      {
        fprintf(stderr, "Usage: ./recover infile\n");
        return 1;
    }
       FILE*inputFile=fopen(argv[1], "r");
    if(inputFile==NULL)
    {
        fprintf(stderr, "Could not open %s.\n", argv[1]);
        return 2;
    }
      FILE* outputFile = NULL;
      BYTE buffer[512];
    int image_count=0;
      char filename[8]={0};

        while(fread(buffer, sizeof(BYTE)*512, 1, inputFile)==1)
    {

           if(buffer[0]==0xFF&&buffer[1]==0xD8&&buffer[2]==0xFF&&(buffer[3]&0xF0)==0xE0)
        {
            if(outputFile != NULL)
              {
                fclose(outputFile);
            }
                  sprintf(filename, "%03d.jpg", image_count++);

                   outputFile = fopen(filename, "w");
        }

       if(outputFile != NULL)
       {

        
            fwrite(buffer, sizeof(BYTE)*512, 1, outputFile);
       }
    }
          if (outputFile != NULL)
     {
             fclose(outputFile);
     }
          fclose(inputFile);

    return 0;


}
