#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Module
{
public:
    string Name = "module";
    Module()
    {
    }

    virtual void Execute(string cmd)
    {
        cout << this->Name << endl;
    }
};

class submodule : public Module
{
public:
    submodule()
    {
        this->Name = "submodule";
    }

    void Execute(string cmd) override
    {
        cout << this->Name << endl;
        cout << "hogehoge" << endl;
    }
};



class MAIN
{
public:
    vector<Module*> Modules;
    MAIN()
    {
        this->Include(new submodule());
    }

    void Include(Module *newmodule)
    {
        this->Modules.push_back(newmodule);
    }

    void Exe()
    {
        for (int i = 0; i < this->Modules.size(); i++)
        {
            cout << i << endl;
            this->Modules[i]->Execute("exe");
        }
    }
};

class CLASS1
{
public:
    string name = "CLASS1";
    CLASS1() {}
    virtual void f()
    {
        cout << this->name << endl;
    }
};

class CLASS2 : public CLASS1
{
public:
    CLASS2()
    {
        this->name = "CLASS2";
    }

    void f() override
    {
        cout << "new " + this->name << endl;
    }
};

void Do_f(CLASS1 target)
{
    target.f();
}

void Do_ff(CLASS1* target)
{
    target->f();
}


int main()
{
    Do_f(CLASS1());
    Do_ff(new CLASS1());

    Do_f(CLASS2());
    Do_ff(new CLASS2());

    return 0;
}