#include <iostream> // cin/cout
#include <string> // strings - getline (cin,string)
#include <vector> // Vecotr <data type> nume



using namespace std;

int Crypth_Decrypth_End()
{
    string a;
    cout<<"\nDoresti sa Cryptezi/Decryptezi/Termini? (C/D/E)\n";
    while (true)
    {
        getline(cin,a);
        if ((a[0]=='C' || a[1]=='c') && a[1]=='\0')
        {
            //return 1 = Crypting
            return 1;
        }
        else if ((a[0]=='D' || a[1]=='d') && a[1]=='\0')
        {
            //return 2 = Decrypting
            return 2;
        }
        else if ((a[0]=='E' || a[0]=='e') && a[1]=='\0')
        {
            //return 3 = Terminating
            cout<<"\nterminating program...";
            return 3;
        }
        else
        {
            cout<<"\nRaspunsul nu este corect...\n\n";
        }
    }
}

int main()
{
    int aux;
    string cuvantul;
    string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    string beta = "XNZLWEBGJHQDYVTKFUOMPCIASRxnzlwebgjhqdyvtkfuompciasr ";
    while(true)
    {

        switch(Crypth_Decrypth_End())
        {
        //1 = Crypthing
        case 1:
        {
            cout<<"\nCuvantul care vrei sa fie Cryptat:\n\n";
            getline(cin,cuvantul);
            cout<<'\n';
            for (char L:cuvantul)
            {
                aux=alpha.find(L);
                if (aux==string::npos)
                {
                    cout<<L;
                    continue;
                }
                cout<<beta.substr(aux,1);
            }
            cout<<'\n';
            break;
        }
        //2 = Decrypthing
        case 2:
        {
            cout<<"\nCuvantul care vrei sa fie DeCryptat:\n\n";
            getline(cin,cuvantul);
            cout<<'\n';
            for (char L:cuvantul)
            {
                aux=beta.find(L);
                if (aux==string::npos)
                {
                    cout<<L;
                    continue;
                }
                cout<<alpha.substr(aux,1);
            }
            cout<<'\n';
            break;
        }
        //3 = Terminate
        case 3:
        {
            return 0;
        }
        //default = error
        default:
        {
            cout<<"\nceva a mers prost...";
        }
        }
    }
    return 0;
}


