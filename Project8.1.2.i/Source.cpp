// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ...
// 1. Вияснити, чи є серед цих символів пара сусідніх букв s[q] або q[s]

#include <iostream>
using namespace std;

char* change(char* str, const char* q, const char* q1, const char* zamina)
{
    char* d = new char[strlen(str) / 2 * 3 + 1];
    char* t = d;
    int j, k, l = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        j = 0;
        k = i;
        l = 0;
        while (q[j] != '\0')
        {
            if (((str[k] == q[j]) || (str[k] == q1[j])) && str[k] != '\0')
            {
                if (j == 1)
                    l++;
                j++;
                k++;
            }
            else
                break;
        }
        if (q[j] == '\0' && (str[k - 1] != str[k - 2]))
        {
            *t++ = '*'; *t++ = '*'; *t++ = '*';
            i = k - 1;
        }
        else
        {
            if (l == 1)
            {
                *t++ = str[k - 2];
                i = k - 2;
            }
        }
        if (j == 0)
        {
            *t++ = str[k];
            i = k;
        }
        if (j == 1)
        {
            *t++ = str[k - 1];
            *t++ = str[k];
            i = k;
        }
    }
    *t = '\0';
    strcpy_s(str, strlen(str) / 2 * 3 + 1, d);
    return d;
}

int main()
{
    char str[102] = "sssSQqqqqQSsssssSQ";
    cout << "Done string: " << endl << endl << str << endl << endl;
    char q[] = "SQ";
    char q1[] = "QS";
    char zamina[] = "***";

    cout << "Changed string: " << endl << endl;
    cout << change(str, q, q1, zamina) << endl;

	return 0;
}
