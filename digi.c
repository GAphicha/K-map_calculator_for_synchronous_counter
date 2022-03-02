#include<stdio.h>
char a[5],b[5];
char j[100][4],k[100][4];

char changetobi1(int x){	
	if(x == 0){
		a[0] = '0';
		a[1] = '0';
		a[2] = '0';
		a[3] = '0';
	}
	else if(x == 1){
		a[0] = '0';
		a[1] = '0';
		a[2] = '0';
		a[3] = '1';
	}
	else if(x == 2){
		a[0] = '0';
		a[1] = '0';
		a[2] = '1';
		a[3] = '0';
	}
	else if(x == 3){
		a[0] = '0';
		a[1] = '0';
		a[2] = '1';
		a[3] = '1';
	}
	else if(x == 4){
		a[0] = '0';
		a[1] = '1';
		a[2] = '0';
		a[3] = '0';
	}
	else if(x == 5){
		a[0] = '0';
		a[1] = '1';
		a[2] = '0';
		a[3] = '1';
	}
	else if(x == 6){
		a[0] = '0';
		a[1] = '1';
		a[2] = '1';
		a[3] = '0';
	}
	else if(x == 7){
		a[0] = '0';
		a[1] = '1';
		a[2] = '1';
		a[3] = '1';
	}
	else if(x == 8){
		a[0] = '1';
		a[1] = '0';
		a[2] = '0';
		a[3] = '0';
	}
	else if(x == 9){
		a[0] = '1';
		a[1] = '0';
		a[2] = '0';
		a[3] = '1';
	}
	else if(x == 10){
		a[0] = '1';
		a[1] = '0';
		a[2] = '1';
		a[3] = '0';
	}
	else if(x == 11){
		a[0] = '1';
		a[1] = '0';
		a[2] = '1';
		a[3] = '1';
	}
	else if(x == 12){
		a[0] = '1';
		a[1] = '1';
		a[2] = '0';
		a[3] = '0';
	}
	else if(x == 13){
		a[0] = '1';
		a[1] = '1';
		a[2] = '0';
		a[3] = '1';
	}
	else if(x == 14){
		a[0] = '1';
		a[1] = '1';
		a[2] = '1';
		a[3] = '0';
	}
	else if(x == 15){
		a[0] = '1';
		a[1] = '1';
		a[2] = '1';
		a[3] = '1';
	}
	else
		printf("out of range BITCH!");

	return a;

}
char changetobi2(int y){	
	if(y == 0){
		b[0] = '0';
		b[1] = '0';
		b[2] = '0';
		b[3] = '0';
	}
	else if(y == 1){
		b[0] = '0';
		b[1] = '0';
		b[2] = '0';
		b[3] = '1';
	}
	else if(y == 2){
		b[0] = '0';
		b[1] = '0';
		b[2] = '1';
		b[3] = '0';
	}
	else if(y == 3){
		b[0] = '0';
		b[1] = '0';
		b[2] = '1';
		b[3] = '1';
	}
	else if(y == 4){
		b[0] = '0';
		b[1] = '1';
		b[2] = '0';
		b[3] = '0';
	}
	else if(y == 5){
		b[0] = '0';
		b[1] = '1';
		b[2] = '0';
		b[3] = '1';
	}
	else if(y == 6){
		b[0] = '0';
		b[1] = '1';
		b[2] = '1';
		b[3] = '0';
	}
	else if(y == 7){
		b[0] = '0';
		b[1] = '1';
		b[2] = '1';
		b[3] = '1';
	}
	else if(y == 8){
		b[0] = '1';
		b[1] = '0';
		b[2] = '0';
		b[3] = '0';
	}
	else if(y == 9){
		b[0] = '1';
		b[1] = '0';
		b[2] = '0';
		b[3] = '1';
	}
	else if(y == 10){
		b[0] = '1';
		b[1] = '0';
		b[2] = '1';
		b[3] = '0';
	}
	else if(y == 11){
		b[0] = '1';
		b[1] = '0';
		b[2] = '1';
		b[3] = '1';
	}
	else if(y == 12){
		b[0] = '1';
		b[1] = '1';
		b[2] = '0';
		b[3] = '0';
	}
	else if(y == 13){
		b[0] = '1';
		b[1] = '1';
		b[2] = '0';
		b[3] = '1';
	}
	else if(y == 14){
		b[0] = '1';
		b[1] = '1';
		b[2] = '1';
		b[3] = '0';
	}
	else if(y == 15){
		b[0] = '1';
		b[1] = '1';
		b[2] = '1';
		b[3] = '1';
	}
	else
		printf("out of range BITCH!");

	return b;
}

int cal(char a,char b,int z,int t){
	if(a == '0' && b == '0'){
		j[t-1][z] = '0';
		k[t-1][z] = 'X';
		printf("0 X ");
	}
	else if(a == '0' && b == '1'){
		j[t-1][z] = '1';
		k[t-1][z] = 'X';
		printf("1 X ");
	}
	else if(a == '1' && b == '0'){
		j[t-1][z] = 'X';
		k[t-1][z] = '1';
		printf("X 1 ");
	}
	else if(a == '1' && b == '1'){
		j[t-1][z] = 'X';
		k[t-1][z] = '0';
		printf("X 0 ");
	}
	return 0;
}

int main(){

	int number[100], i, t, z, temp, count,temp1=97,run = 1;
	char kmap[16] = {'x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x'};

	printf("Enter i : ");
	scanf("%d",&i);
		
	for(t = 1 ; t <= i ; t++){
		printf("%d. Enter (0-15) : ",t);
		scanf("%d",&number[t-1]);
	}
	for(t = 1 ; t <= i-1 ; t++){
		changetobi1(number[t-1]);
		changetobi2(number[t]);
		
		for(z=0;z<4;z++)
			cal(a[z],b[z],z,t);
		printf("\n");
	}
	changetobi1(number[i-1]);
	changetobi2(number[0]);

	for(z=0;z<4;z++)
		cal(a[z],b[z],z,t);
	printf("\n");
	for(temp = 0;temp<4;temp++,temp1++){
	printf("\nJ%c = \n",temp1);
	
	for(t = 1 ; t <= i ; t++){
		if(number[t-1] == 0){
			kmap[0] = j[t-1][temp];
		}
		else if(number[t-1] == 1){
			kmap[1] = j[t-1][temp];
		}
		else if(number[t-1] == 2){
			kmap[3] = j[t-1][temp];
		}
		else if(number[t-1] == 3){
			kmap[2] = j[t-1][temp];
		}
		else if(number[t-1] == 4){
			kmap[4] = j[t-1][temp];
		}
		else if(number[t-1] == 5){
			kmap[5] = j[t-1][temp];
		}
		else if(number[t-1] == 6){
			kmap[7] = j[t-1][temp];
		}
		else if(number[t-1] == 7){
			kmap[6] = j[t-1][temp];
		}
		else if(number[t-1] == 8){
			kmap[12] = j[t-1][temp];
		}
		else if(number[t-1] == 9){
			kmap[13] = j[t-1][temp];
		}
		else if(number[t-1] == 10){
			kmap[15] = j[t-1][temp];
		}
		else if(number[t-1] == 11){
			kmap[14] = j[t-1][temp];
		}
		else if(number[t-1] == 12){
			kmap[8] = j[t-1][temp];
		}
		else if(number[t-1] == 13){
			kmap[9] = j[t-1][temp];
		}
		else if(number[t-1] == 14){
			kmap[11] = j[t-1][temp];
		}
		else if(number[t-1] == 15){
			kmap[10] = j[t-1][temp];
		}
	}
	for(count=0;count<16;count++){
		printf(" %c ",kmap[count]);
		if((count+1)%4 == 0 && count !=0)
			printf("\n");
	}
	
	printf("\nK%c = \n",temp1);

	for(t = 1 ; t <= i ; t++){
		if(number[t-1] == 0){
			kmap[0] = k[t-1][temp];
		}
		else if(number[t-1] == 1){
			kmap[1] = k[t-1][temp];
		}
		else if(number[t-1] == 2){
			kmap[3] = k[t-1][temp];
		}
		else if(number[t-1] == 3){
			kmap[2] = k[t-1][temp];
		}
		else if(number[t-1] == 4){
			kmap[4] = k[t-1][temp];
		}
		else if(number[t-1] == 5){
			kmap[5] = k[t-1][temp];
		}
		else if(number[t-1] == 6){
			kmap[7] = k[t-1][temp];
		}
		else if(number[t-1] == 7){
			kmap[6] = k[t-1][temp];
		}
		else if(number[t-1] == 8){
			kmap[12] = k[t-1][temp];
		}
		else if(number[t-1] == 9){
			kmap[13] = k[t-1][temp];
		}
		else if(number[t-1] == 10){
			kmap[15] = k[t-1][temp];
		}
		else if(number[t-1] == 11){
			kmap[14] = k[t-1][temp];
		}
		else if(number[t-1] == 12){
			kmap[8] = k[t-1][temp];
		}
		else if(number[t-1] == 13){
			kmap[9] = k[t-1][temp];
		}
		else if(number[t-1] == 14){
			kmap[11] = k[t-1][temp];
		}
		else if(number[t-1] == 15){
			kmap[10] = k[t-1][temp];
		}
	}
	for(count=0;count<16;count++){
		printf(" %c ",kmap[count]);
		if((count+1)%4 == 0 && count !=0)
			printf("\n");
	}
	}
	printf("(0/1) : ");
	scanf("%d",&run);
	if(run == 1)
		main();
	else
		return 0;
}