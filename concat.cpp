#include <iostream>
using namespace std;

string ConcatRemove(string s, string t, int k)
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
        ret = "Yes  >  " + s;
    }

    return ret;
}

int main(int argc, char *argv[])
{

    if (argc != 4)
        cout << "Enter the variables. Ex. s(string), t(string) e k(counter).";
    else
    {
        string s = argv[1];
        string t = argv[2];
        int k = stoi(argv[3]);
        if ((s.length() > 100) or (t.length() > 100) or (k > 100))
        {
            cout << "The max limit of characters for s and t is 100." << endl;
            cout << "The max limit for k is 100" << endl;
        }
        else
        {
            string a = ConcatRemove(s, t, k);
            cout << a;
        }
    }

    return 0;
}
