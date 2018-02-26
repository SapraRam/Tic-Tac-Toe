#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char dig[10]={'o','1','2','3','4','5','6','7','8','9'};
int player = 1;

void diagram (void);
void choice (void);
int win(void);


void main()
{
	int i,play;
	while(play != 0)
	{
		clrscr();
		printf("\nDo You want to play Tic Tac Toe : If yess then press 1 and if no press 0 : \n");
		scanf("%d",&play);
		if(play == 1)
		{
			do
			{
				clrscr();
				diagram();
				choice();
				i = win();

				player++;
			}while (i == -1);
			diagram();

			if (i == 1)
			{
				printf("\nplayer %d wins",--player);
				getch();
			}
			else
			{
				printf("\nGame draw");
				getch();
			}
		}
		else if(play == 0)
			exit(0);
		else
			printf("\nWorng Input\n");
			getch();
	}
}

void diagram(void)
{
	printf("T I C   T A C   T O E   v1.2.6");
	printf("\n%c|%c|%c\n",dig[1],dig[2],dig[3]);
	printf("-----\n");
	printf("%c|%c|%c\n",dig[4],dig[5],dig[6]);
	printf("-----\n");
	printf("%c|%c|%c\n",dig[7],dig[8],dig[9]);
}


void choice(void)
{
	int choose;
	char mark;
	player = (player % 2) ? 1:2;
	printf("Enter your choice\n");
	scanf("%d",&choose);
	mark = (player == 1) ? 'X':'O';
		if(choose== 1 && dig[1]=='1')
			dig[1] = mark;
		else if(choose== 2 && dig[2]=='2')
			dig[2] = mark;
		else if(choose== 3 && dig[3]=='3')
			dig[3] = mark;
		else if(choose== 4 && dig[4]=='4')
			dig[4] = mark;
		else if(choose== 5 && dig[5]=='5')
			dig[5] = mark;
		else if(choose== 6 && dig[6]=='6')
			dig[6] = mark;
		else if(choose== 7 && dig[7]=='7')
			dig[7] = mark;
		else if(choose== 8 && dig[8]=='8')
			dig[8] = mark;
		else if(choose== 9 && dig[9]=='9')
			dig[9] = mark;
		else
		{
			printf("Invalid move");
			player--;
			getch();
		}
}

int win(void)
{
    if (dig[1] == dig[2] && dig[2] == dig[3])
	return 1;

    else if (dig[4] == dig[5] && dig[5] == dig[6])
	return 1;

    else if (dig[7] == dig[8] && dig[8] == dig[9])
	return 1;

    else if (dig[1] == dig[4] && dig[4] == dig[7])
	return 1;

    else if (dig[2] == dig[5] && dig[5] == dig[8])
	return 1;

    else if (dig[3] == dig[6] && dig[6] == dig[9])
	return 1;

    else if (dig[1] == dig[5] && dig[5] == dig[9])
	return 1;

    else if (dig[3] == dig[5] && dig[5] == dig[7])
	return 1;

    else if (dig[1] != '1' && dig[2] != '2' && dig[3] != '3' &&
	dig[4] != '4' && dig[5] != '5' && dig[6] != '6' && dig[7]
	!= '7' && dig[8] != '8' && dig[9] != '9')

	return 0;
    else
	return  - 1;
}
