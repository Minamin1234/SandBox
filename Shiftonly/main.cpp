#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> BB;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        BB.push_back(A);
    }

    int time = 0;
    bool frag = false;
    while (true)
    {
        if (frag)
        {
            time--;
            break;
        }
        for (int i = 0; i < N; i++)
        {
            if (BB[i] % 2 == 0) BB[i] /= 2;
            else
            {
                frag = true;
                break;
            }
        }
        time++;
    }
    cout << time << endl;
    return 0;
}