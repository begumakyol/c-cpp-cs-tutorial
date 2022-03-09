#include <iostream>
using namespace std;
/*
soru: tanımlanan dizinin elemanlarının yerini değiştirmeden 
o dizinin elemanlarını sıralayan c++ programı. 
çözüm için dizimize alternatif başka bir dizi tanımlıyoruz 
ve o dizinin her bir elemanı bizim orijinal dizimizin her bir elemanının RAM'deki adresine
işaret ediyor. yeni tanımladığımız dizimiz üzerinde sıralama yapıyoruz 
ve böylece ilk dizimizdeki hiçbir elemana dokunmamış oluyoruz. 
yazdırma kısmında da sonradan tanımladığımız diziyi yazdırıyoruz ki 
konsolda elemanlar sıralı gözüksün.
*/

//önce swap fonksiyonunu tanımladık.

void swap(int &a, int &b)
{
		int temp=a;
		a=b;
		b=temp;
}

int main(){

	int i,j,k;

	int a[5] = {9,1,3,11,2};
	
	//ilk aşamada işlemci 4 karşılaştırma yaptı.
	//<9,1>,3,11,2
	//1,<9,3>,11,2
	//1,3,<9,11>,2
	//1,3,9,<11,2>
	//-------
	
	//ikinci aşamada işlemci 3 karşılaştırma yaptı.
	//<1,3>,9,2,11
	//1,<3,9>,2,11
	//1,3,<9,2>,11
	//-------
	
	//üçüncü aşamada işlemci 2 karşılaştırma yaptı.
	//<1,3>,2,9,11
	//1,<3,2>,9,11
	//-------
	
	//dördüncü aşamada işlemci 1 karşılaştırma yaptı.
	//<1,2>,3,9,11
	//-------

	//1.adım pointer dizisini tanımladık.
	int *b[5];	

	//2.adım pointer dizisine(b) orijinal dizinin(a) adreslerini atadık.
	for (i=0; i<5; i++)
	{
		b[i]=&a[i];
	}
	
	//3.adım pointer dizisinde kıyaslama yaptık.
	for(i=0 ; i<4 ; i++)
	{
		for( j=0; j<4-i; j++)
		{
			if(*b[j] > *b[j+1])
			{
				swap(b[j],b[j+1]);
			}
		}
	}
	
	//4.1.adım orijinal diziyi yazdırdık.
	cout << "orijinal dizi: "<<endl;
	for (i=0; i<5; i++)
	{
		cout << a[i] << " ";
	}
	
	//alt satıra geçtik.
	cout <<endl;
	
	//4.2.adım sıralanmış adreslerin sıralı halini yazdırdık.
	cout<<"siralanmis hali: "<<endl;
	for (i=0; i<5; i++)
	{
		cout<<*b[i]<<" ";
	}
	
	return 0;	
	
}