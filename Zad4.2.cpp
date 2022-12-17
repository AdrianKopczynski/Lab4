#include <iostream>
using namespace std;

int szukanie_najwiekszego(int tab[]){
	
}
int main()
{
    int tableCap;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> tableCap;
    int table[tableCap];
    for (int i = 0; i<=tableCap;i++){
    	int temp = 0;
    	cout << "Podaj wartosc dla elementu " << i+1 << " : " <<endl;
    	cin >> temp;
    	cout << endl;
    	table[i] = temp;
	}
	int max= 0;
	int times;
	int prevTimes = 0;
	for (int i = 0; i<=tableCap;i++){
		times = 0;
		for(int x = 0; x<=tableCap;x++){
			int temp = table[i];
			if(table[x] == temp){
				times++;
			}
			else{
				continue;
			}
		}
		if(times>prevTimes){
			
		}
		prevTimes=times;
	}
	if (max == 0){
		cout << "Kazda wartosc wystepuje po jednym razie";
	}
	else{
		cout << "Najczesciej wystepujacy element tablicy to " << max ;
	}
    return 0;
}
