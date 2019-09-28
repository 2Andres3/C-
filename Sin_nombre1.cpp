#include <iostream>

using namespace std;

main()
{
	int comico[100], numero,mayor=100;
	
	cout<<"ingrese la cantidad de elementos del vector \n";
	cin>>numero;
	
		for (int i=0;i<=numero;i++)
		{
			cout<<i+1<<"ingrese un numero";
			cout<<endl;
			cin>>comico[i];
				
				if (comico[i]<mayor)
				{
					mayor=comico[i];
				}
		}
	cout<<"El numero mayor es: "<<mayor;

}
