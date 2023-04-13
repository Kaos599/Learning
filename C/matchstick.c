

#include <stdio.h>

int main (){


int matchsticks = 21;
int compChosen, picked;


while (1) {

  printf("Itne matches bacche hai: %d\n", matchsticks);
  printf("Haarne ke liye tyaar hoja MANAV!\nMatchsticks choose kr 1 se 4 me:");
  scanf("%d", &picked);

 if (picked < 4 || picked > 1); {
    continue; }


  matchsticks = (matchsticks - picked);
    printf("Itni matchsticks bacchi hai = %d\n", matchsticks);

    compChosen = (compChosen - picked);
    printf("Computer Mahashsay ne itni li hai = %d\n", compChosen);

    matchsticks = (matchsticks - compChosen);

if (matchsticks == 1) {

    printf("Itne matches bacche hai: %d\n", matchsticks);
    printf("har gaya lmao!!/n HAHAHAHAHAHAHAHA");
    break;

}






 }
return 0;
}




