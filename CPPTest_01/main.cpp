#include <iostream>
#include <string>
#include <vector>

//#define PI 3.141592653589793;
const float PI = 3.141592653589793f;

using namespace std;

struct S_ARGS
{
    string Command;
    vector<string> Args;
};

S_ARGS DecodeText(string Text)
{
    S_ARGS CArgs;
    char AText;
    string CText = "";
    int Levels = 0;

    for (int i = 0; i < Text.size(); i++)
    {
        AText = Text[i];

        if (Text[i] == ' ')
        {
            if (Levels == 0) CArgs.Command = CText;
            else CArgs.Args.push_back(CText);
            Levels++;
            CText = "";
        }
        else CText += Text[i];
    }
    if (Levels == 0) CArgs.Command = Text;
    if (CText.size() == 0) return CArgs;

    CArgs.Args.push_back(CText);
    return CArgs;
}

int main()
{
    while (true)
    {
        S_ARGS CArgs;
        vector<string> Args;
        string text;
        getline(cin,text);
        //cout << text << endl;

        CArgs = DecodeText(text);

        if (CArgs.Command == "!exit") break;
        else if (CArgs.Command == "!calc")
        {
            int Levels = 0;
            float L;
            float R;
            float Value = 0.0f;

            if (CArgs.Args.size() < 3) {}//引数は最低でも3つ必要です。それより少ない数は実行不可。
            else
            {
                for (int i = 0; i < CArgs.Args.size() - 2; i += 2)
                {
                    if (Levels == 0)
                    {
                        L = stof(CArgs.Args[i]);
                        R = stof(CArgs.Args[i + 2]);
                    }
                    else
                    {
                        L = Value;
                        R = stof(CArgs.Args[i + 2]);
                    }

                    if (CArgs.Args[i + 1] == "+") Value = L + R;
                    else if (CArgs.Args[i + 1] == "-") Value = L - R;
                    else if (CArgs.Args[i + 1] == "*") Value = L * R;
                    else if (CArgs.Args[i + 1] == "/") Value = L / R;
                    else if (CArgs.Args[i + 1] == "mod") Value = (int)L % (int)R;

                    Levels++;

                }
                cout << Value << endl;
            }
            
        }
        else if (CArgs.Command == "!math")
        {
            double Value = 0.0f;
            double x = stod(CArgs.Args[1]);
            if (CArgs.Args[0] == "sqrt") Value = sqrt(x);
            else if (CArgs.Args[0] == "sin")
            {
                x = x * PI / 180;
                Value = sin(x);
            }
            else if (CArgs.Args[0] == "cos")
            {
                x = x * PI / 180;
                Value = cos(x);
            }
            else if (CArgs.Args[0] == "tan")
            {
                x = x * PI / 180;
                Value = tan(x);
            }
            else if (CArgs.Args[0] == "rad")
            {
                x = x * PI / 180;
                Value = x;
            }
            else if (CArgs.Args[0] == "pow")
            {
                double y = stod(CArgs.Args[2]);
                Value = pow(x, y);
            }

            cout << Value << endl;
        }
    }
    return 0;
}