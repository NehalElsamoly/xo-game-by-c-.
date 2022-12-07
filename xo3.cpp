#include<iostream>
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='x';
void draw(){
	system("cls");
	cout<<"---------\n";
	for(int i=0; i<3;i++){
			cout<<"| ";
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<" ";
		}
			cout<<"| ";
		cout<<endl;
	}
		cout<<"---------\n";
}
	void replace(){
		char pos;
		cout<<"enter postion ("<<player<<")\n";
		cin>>pos;
		for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			if(matrix[i][j]==pos){
				matrix[i][j]=player;
			}
			}
			}
		if(player=='x'){
			player='o';
		}
		else
			player='x';
	}
	char checkwinner(){
		int x=0,o=0,counter=0;
			for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			if(matrix[i][j]=='x'){
			x++;
			}
			else if(matrix[i][j]=='o'){
			o++;
			}
			if(x==3)
			return 'x';
			if(o==3)
			return 'o';
		}
		x=0,o=0;
		}
			for(int j=0; j<3;j++){
		for(int i=0;i<3;i++){
			if(matrix[i][j]=='x'){
			x++;
			}
			else if(matrix[i][j]=='o'){
			o++;
			}
			if(x==3)
			return 'x';
			if(o==3)
			return 'o';
		}
		x=0,o=0;
		}
		if(matrix[0][0]=='x'&&matrix[1][1]=='x'&&matrix[2][2]=='x')
return 'x';
if(matrix[0][0]=='o'&&matrix[1][1]=='o'&&matrix[2][2]=='o')
return 'o';
if(matrix[0][2]=='x'&&matrix[1][1]=='x'&&matrix[2][0]=='x')
return 'x';
if(matrix[0][2]=='x'&&matrix[1][1]=='x'&&matrix[2][0]=='x')
return 'o';
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(matrix[i][j]!='x'&&matrix[i][j]!='o')
			counter++;
		}
	}
			if(counter==0)
			return '=';
			return '*';
	}

int main(){
	while(checkwinner()=='*'){
		draw();
		replace();
		checkwinner();
	}
	if(checkwinner()=='x')
	{
		cout<<"the winner x";
	}
		if(checkwinner()=='o')
	{
		cout<<"the winner o";
	}
		if(checkwinner()=='=')
	{
		cout<<"equal";
	}
	return 0;
}
