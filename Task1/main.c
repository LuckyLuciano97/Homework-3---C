#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void changeFloors(int x, int y){
if(x == y){
            printf("You are already on this first floor, Please choose another floor\n");
} else {
    if(x > y && y != 5){
        printf("Going up\n");
        for(x;x < y; x++){
                printf("%d\n",x);
        }
            if(x == 0){
                printf("You are currently in the lobby floor\nPress the Space bar and then Enter to get out of the elevator or choose another floor\n");
            } else{
                printf("You are currently on floor %d\nPress the Space bar and then Enter to get out of the elevator or choose another floor\n", x);
            }
    } else {
        printf("Going down\n");
        for(x;x > y; x--){
                printf("%d",x);
        }
            if(x == 0){
        printf("You are currently in the lobby floor\nPress the Space bar and then Enter to get out of the elevator or choose another floor\n");
        } else{
            printf("You are currently on floor %d\nPress the Space bar and then Enter to get out of the elevator or choose another floor\n", x);
        }
    }
}
}


int main() {
    int currentFloor = 0;
    char floor;
    int floorNum;
    bool stopElevator = false;

    // printf("What floor would you like to go to?\n");
    // scanf("%c", &floor);

//P is 120 and 80
        printf("What floor would you like to go to?\n");

while(stopElevator == false){
        scanf("%c", &floor);

switch (floor) {
    case 'P':
    floorNum = 0;
    changeFloors(floorNum, currentFloor);
    currentFloor = floorNum;
    scanf("%c", &floor);
    break;
  case '1':
  floorNum = 1;
    changeFloors(floorNum, currentFloor);
    currentFloor = floorNum;
    scanf("%c", &floor);
    break;
  case '2':
    floorNum = 2;
    changeFloors(floorNum, currentFloor);
    currentFloor = floorNum;
    scanf("%c", &floor);
    break;
  case '3':
    floorNum = 3;
    changeFloors(floorNum, currentFloor);
    currentFloor = floorNum;
    scanf("%c", &floor);
    break;
  case '4':
    floorNum = 4;
    changeFloors(floorNum, currentFloor);
    currentFloor = floorNum;
    scanf("%c", &floor);
    break;
  case '5':
    floorNum = 5;
    changeFloors(floorNum, currentFloor);
    currentFloor = floorNum;
    scanf("%c", &floor);
    break;
  case ' ':
    stopElevator = true;
    printf("Have a nice day\n");
    break;
  default:
    printf("Please choose a floor between 0 and 5\n");
    scanf("%c", &floor);
    break;


}


}

}


