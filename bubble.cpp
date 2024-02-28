/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int k;
    cout << "Введите колво элементов в строке:"<<endl;
    cin >> k;
    int n;
    cout << "Введите количество элементов:" << endl;
    cin >> n;
   int numb[n];
    vector <int> otr;
   vector <int> pol;
    for(int i = 0 ;i<n;++i)
    {
        int a;
        cout << "Введите элемент списка:";
        cin >> a;
        numb[i] = a;
        if(numb[i]<0)
        {
            int a = numb[i];
            otr.push_back(a);
            
            
        }
        else
        {
            if(numb[i]>0)
            {
            int a=numb[i];
            pol.push_back(a);
            }
            
            
        }
        
        
        
        
    }
    cout << "Отрицательные элементы:" << endl;
    for(int i = 0;i<otr.size();++i)
    {
        
        if(i%k==0)
        {
            cout << endl;
           cout << otr[i] << " "; 
        }
        else
        {
            cout << otr[i] << " ";
        }
    
    }
    cout << endl;
    cout << "Положительные элементы:" << endl;
    for(int i = 0;i<pol.size();++i)
    {
        if(i%k==0)
        {
            cout << endl;
           cout << pol[i] << " "; 
        }
        else
        {
            cout << pol[i] << " ";
        }
    
    }
    
    
    
}
