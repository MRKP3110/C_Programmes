 #include<stdio.h>

  //switch(number){
  //  case 1: do somthing
  //       break;
  //  case 2: do somthing
  //       break;
  //  default: do somthing  
  //    }

 int main(){
    int day; // 1-mon; 2-tue; 3-wed;
    printf("enter the day (1 - 7)");
    scanf("%d", &day);

    switch(day){

        case 1: printf("monday \n");
            break;
        case 2: printf("tuesday \n");
            break;
        case 3: printf("wednesday \n");
            break;
        case 4: printf("thursday \n");
            break;
        case 5: printf("friday \n");
            break;
        case 6: printf("saturday \n");
            break;
        case 7: printf("sunday \n");
            break;
        default : printf("not a valid day! \n");                             
    }       
    return 0;


 }