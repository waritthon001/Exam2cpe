#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

void sort(double x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] >x[j-1]){
				double temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	string text;
	double num[20];
	int sum=0;
	ifstream source ;
	source.open("score3.txt");
	while(getline(source,text)){
		num[sum]=atof(text.c_str());
		sum+=1;
	}
	sort(num,sum);
	ofstream file;
	file.open("result.txt");
	
	for(int i = 0; i < sum; i++)
	{
		
		if (num[i-1]==num[i]) {

			file<<i<<" : "<<num[i]<<endl;
			
		}
			else
		{
			file<<i+1<<" : "<<num[i]<<endl;
		}
		
		
		
	}
	file.close();
	return 0;
}

