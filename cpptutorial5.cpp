#include <iostream>
#include <string.h>
using namespace std;

void printArray ( char names [][30], int size){
	for (int i=0; i<size; i++){
		cout<< names[i]<<" ";
	}
}
	
void sortArray(char names[][30], int size){ //bubble sort
	char temp[30];
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-1-i; j++){
			if(strcmp(names[j], names[j+1])>0){//strcmp karsýlastýrma yapar
				strcpy(temp, names[j]); //saðdakini soldakine atýyor.
				strcpy(names[j], names[j+1]);
				strcpy(names[j + 1], temp);
			}
		}
	}
}

void reverseArray(char names [][30], int size){	
	char temp[30];
	for(int i=0; i<size/2; i++){
		strcpy(temp,names[i]); //saðdakini soldakine atýyor.
		strcpy(names[i],names[size-1-i]);
		strcpy(names[size-1-i],temp);
	}
}

bool isExist(char name[30], int size, char names[][30]){
	int i, result;
 	for(i=0; i<size; i++){
	result=strcmp(name, names[i]);
		if(result==0){
			return true;
		}
	}	
		return false;
}

int findName(char name[30], int size, char names[][30]){
	int i, result;
	for(i=0; i<size; i++){
		result = strcmp(name, names[i]);
		if(result==0) {
		return i;
		}	
	}
return -1;
}

int main(){
	char names[10][30]={"ali", "veli", "can", "eda", "seda", "ece", "nur", "su", "ada", "ates"};
	
	printArray(names,10);
	
	cout<<endl;
	cout<<"--------------------------------"<<endl;
	
	sortArray(names,10);
	printArray(names,10);
	
	cout<<endl;
	cout<<"--------------------------------"<<endl;
	
	reverseArray(names,10);
	printArray(names,10);
	
	cout<<endl;
	cout<<"--------------------------------"<<endl;
	
	char name[30];
	cout << "Aratmak istediginiz ismi giriniz: " <<endl;
  	cin >> name; // Boþluk karakterinden itibaren girilen karakterleri dikkate almaz.
  	
	bool result=isExist(name, 10, names);
//	cout<<result<<endl; //varsa 1, yoksa 0 gösterecek.
		if(result){
			cout<<"Isim indekste "<<findName(name,10,names)<<". sirada bulunuyor."<<endl;
		}
		else{
			cout<<"Isim indekste yok."<<endl;
		}
		
return 0;
}
