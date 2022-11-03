#include <iostream>
using namespace std;

string ConcatERemove(string s, string t, int k)
{
    int s_size = s.length();
    int t_size = t.length();
    string ret = "Não";

    if ((t_size < k))
    {
        int numberOfRemove = k - t_size;
        for (int i = 1; i <= numberOfRemove; i++)
        {
            if (!s.empty())
            {
                s.pop_back();
            }
        }

        for (int i = 0; i <= t_size; i++)
        {
            s = s + t.front();
            t.erase(0, 1);
        }
        ret = "Sim  >>>  " + s;
    }

    return ret;
}

int main(int argc, char *argv[])
{

    if (argc != 4)
        cout << "Informe a variável s(string), t(string) e k(contador).";
    else
    {
        string s = argv[1];
        string t = argv[2];
        int k = stoi(argv[3]);
        if ((s.length() > 100) or (t.length() > 100) or (k > 100))
        {
            cout << "O limite máximo de caracters para s e t, é igual a 100." << endl;
            cout << "O limite máximo para k é 100" << endl;
        }
        else
        {
            string a = ConcatERemove(s, t, k);
            cout << a;
        }
    }
}