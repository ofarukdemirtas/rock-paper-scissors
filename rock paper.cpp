#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <cstdlib>
int main()
{ 
int playerscore=0;
int computerscore=0;
start:
int f1;
char answ;
puts("\n rock(0),paper(1) or scissors(2): choose one");
scanf("%d",&f1);

if(f1 != 0 && f1!=1 && f1!=2){
	puts("\n you have to enter 0, 1 or 2 ");
	goto start;
}

srand(time(NULL));   // Initialization, should only be called once. To get random number it is necessary
int r = rand() % 3;
printf("%d",r);

	if 	(f1 == r)
	{ 
	printf("\n DRAW");
	printf("\nScore:%d-%d",computerscore,playerscore);
		
		if(computerscore==3 || playerscore==3 ){
		printf("\nDo you wanna play again ?(Y or N)\n");
		scanf("%s",&answ);
			if(answ =='y'||answ =='Y'){
			computerscore=0;
			playerscore=0;
			goto start;
			}else{
			return 0;
			}
		}else{
			goto start;
		}
	}
	else if((f1 == 0 && r==2) ||(f1==1 && r==0 )||(f1==2 && r==1)){
		printf("\nyou got it man");
		playerscore++;
		printf("\nScore:%d-%d",computerscore,playerscore);
		if(computerscore==3 || playerscore==3 ){
		printf("\nDo you wanna play again ?(Y or N)\n");
		scanf("%s",&answ);
			if(answ =='y'||answ =='Y'){
			computerscore=0;
			playerscore=0;
			goto start;
			
			}else{
			return 0;
			}
	}else{
		goto start;
	}
	}
	else if((f1== 1 && r==2) ||(f1==2 && r==0 )||(f1==0 && r==1)) {
		printf("\nyou lost  man sorry");
		computerscore++;
		printf("\nScore:%d-%d\n",computerscore,playerscore);
		if(computerscore==3 || playerscore==3 ){
		printf("\nDo you wanna play again ?(Y or N)\n");
		scanf("%s",&answ);
		if(answ == 'y'||'Y'){
			computerscore=0;
			playerscore=0;
			goto start;
		}else {
		return 0;
		}
	}else{
		goto start;
	}
	}
	
}
