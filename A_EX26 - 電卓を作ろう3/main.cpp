#include <bits/stdc++.h>

#define NONE 0
#define VARINT 1
#define VARVEC 2
#define SETVAR 1
#define ABLE 3

using namespace std;

map<string, int> IntVars;
map<string, vector<int>> VecVars;

//�����^�̕ϐ����쐬���܂��D
void CreateVar(string name, int init);

//�z��^�̕ϐ����쐬���܂��D
void CreateVVar(string name, vector<int> initv);

//�w�肵�����̂��琮���^�ϐ��̒l��Ԃ��܂��D
int GetVar(string name);

//�w�肵�����̂���z��^�ϐ��̔z���Ԃ��܂��D
vector<int> GetVVar(string name);

//��������o�͂��܂��D
void Print(string val);

//���l���o�͂��܂��D
void Print(int val);

//�z����o�͂��܂��D
void Print(vector<int> v);

//���͂��ꂽ�z�����ǂ��擾���܂��D
//=�ȍ~�̓��͂�ǂݎ��܂��D
vector<int> GetVec();

//���͂��ꂽ������ǂ��擾���܂��D
//=�ȍ~�̓��͂�ǂݎ��܂��D
int DecodeExp();

//���͂��ꂽ�z�����ǂ��擾���܂��D
//vector<int> DecodeVExp();

//�w�肵�������񂪐��l�ɕϊ��\���ǂ����m�F���C
//�\�ł���Ύw�肵���ϐ��ɑ�����܂��D
//�����񂪕ϐ����̏ꍇ�ɂ͕ϐ��̒l���������CSETVAR�̒l���Ԃ�܂��D
//���S�Ɉ�v���Ȃ��ꍇ�ɂ�NONE�̒l���Ԃ�܂��D
int SCheck(string val,int &x);

//�w�肵��������̕ϐ������邩�ǂ�����Ԃ��܂��D
int Search(string name);

//�w�肵�������񂪐��l�ɕϊ��\���ǂ������m�F���C
//�\�ł���Ύw�肵���z��ɒǉ����܂��D
//�����񂪔z�񖼂̏ꍇ�ɂ͔z��̒l���������CSETVAR�̒l���Ԃ�܂��D
//���S�Ɉ�v���Ȃ��ꍇ�ɂ�NONE�̒l���Ԃ�܂��D
int SCheck(string val, vector<int>& v);


//-----------Commands--------------
//"int"
void INT();
//"print_int"
void PrintInt();
//"vec"
void Vec();
//"print_vec"
void PrintVec();


int main()
{
	int N;
	string Cmd;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
	cin >> Cmd;

	if (Cmd == "int")
	{
			INT();
	}
	else if (Cmd == "print_int")
	{
			PrintInt();
	}
	else if (Cmd == "vec")
	{
			Vec();
	}
	else if (Cmd == "print_vec")
	{
			PrintVec();
		}
	}
	
	return 0;
}

void CreateVar(string name, int init)
{
	IntVars[name] = init;
}

void CreateVVar(string name, vector<int> initv)
{
	VecVars[name] = initv;
}

int GetVar(string name)
{
	return IntVars.at(name);
}

vector<int> GetVVar(string name)
{
	return VecVars.at(name);
}

void Print(string val)
{
	cout << val << endl;
}

void Print(int val)
{
	cout << val << endl;
}

void Print(vector<int> v)
{
	cout << "[";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i);
		if (i == v.size() - 1)
			break;
		cout << ",";
	}
	cout << endl;
}

vector<int> GetVec()
{
	string begin, val, cma;
	int ival = 0;
	vector<int> v;

	cin >> begin; // [
	while (true)
	{
		cin >> val >> cma; //x ,

		SCheck(val, ival);
		v.push_back(ival);
		if (cma != ",")
			break;
	}

	return v;
}

int DecodeExp()
{
	string L, Op, R, sc;
	int iL = 0, iR = 0, val = 0;

	cin >> L >> Op;

	while (true)
	{

		SCheck(L, iL);
		if (Op == ";") break;

		cin >> R;
		SCheck(R, iR);
		if (Op == "+")
			val = iL + iR;
		else if (Op == "-")
			val = iL - iR;

		L = to_string(iL);
	}

	return val;
}

/*vector<int> DecodeVExp()
{
	string Begin="[", Lv, Op, Rv, cm, End = "]";
	vector<int> v;

	cin >> Begin;

	while (true)
	{
		cin >> Lv >> cm;

		if (cm == "]")
		{

		}
		else
		{

		}
	}
}*/

int SCheck(string val, int& x)
{
	try
	{
		x = stoi(val);
		return ABLE;
	}
	catch (invalid_argument)
	{
		if (Search(val) == VARINT)
		{
			x = GetVar(val);
			return SETVAR;
		}
	}

	return NONE;
}

int Search(string name)
{
	if (IntVars.count(name)) return VARINT;
	else if (VecVars.count(name)) return VARVEC;

	return NONE;
}

//�w�肵�������񂪐��l�ɕϊ��\���ǂ������m�F���C
//�\�ł���Ύw�肵���z��ɒǉ����܂��D
//�����񂪔z�񖼂̏ꍇ�ɂ͔z��̒l���������CSETVAR�̒l���Ԃ�܂��D
//���S�Ɉ�v���Ȃ��ꍇ�ɂ�NONE�̒l���Ԃ�܂��D
int SCheck(string val, vector<int>& v)
{
	int vx;
	try
	{
		vx = stoi(val);
		return ABLE;
	}
	catch (invalid_argument)
	{
		if (Search(val) == VARVEC)
		{
			v = GetVVar(val);
			return SETVAR;
		}
	}

	return NONE;
}


void INT()
{
	string name, eq;
	int init;

	cin >> name >> eq;
	init = DecodeExp();
	CreateVar(name, init);
}

void PrintInt()
{
	int val = 0;

	val = DecodeExp();
	Print(val);
}

void Vec()
{
	string name, eq;
	vector<int> v = GetVec();

	CreateVVar(name, v);
}

void PrintVec()
{
	string Op;
	vector<int> result;

	result = GetVec();

	while (true)
	{

		cin >> Op;

		if (Op != ";")
		{
			if (Op == "+")
			{
				vector<int> v2 = GetVec();
				for (int i = 0; i < result.size(); i++)
					result.at(i) += v2.at(i);
			}
			else if (Op == "-")
			{
				vector<int> v2 = GetVec();
				for (int i = 0; i < result.size(); i++)
					result.at(i) -= v2.at(i);
			}
		}
		else
			break;
	}

	Print(result);
}