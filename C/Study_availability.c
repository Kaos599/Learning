/* Script for my study moods and availibility*/

#include <stdio.h>

int main () {

float time; //adjusted to IST please (format hh.mm, 24H)//
int mood; //on a scale of 1-10, ask me//
char mode []= {'mic', 'cam', 'ss'}; //mode of studying//



  printf("Whoever wants to study.... Please enter\n 1.The present time\n 2.My mood\n 3.Mode of studying\n");
  scanf("%f,%d,%c", time, mood, mode);


  if(time <11.00 || mood < 4  || mode != 'mic', 'cam'){

     printf("fuckity fuck no");

  } else if (time >11.00 && time < 16.00 || mood > 4 || mode != 'mic', 'cam') {

     printf("Drop me a DM");

  } else if (time > 16.00 && time < 23.00 || mood > 5  || mode != 'mic', 'cam') {

     printf("Might be subject to my glorious appetite\n Please refer to terms and conditions (if i happen to make them)");

  } else if ((time >00.00 && time < 03.00)|| mood > 4 || mode != 'mic', 'cam') {

     printf("LETS GO!, what were you doing till now?");

  }



return 0;
}
