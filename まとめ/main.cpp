#include <bits/stdc++.h>

using namespace std;

int main()
{
	/*
	//[�f�[�^�R���e�i]

	//pair - 2�g�̂�
	pair<int, int> p(0, 0);
	p.first; //>>0
	p.second; //>>0

	//tuple�@n��ނň�g�D(�����ł́C3��ނň�g�D)
	tuple<string, int, int> t("TUPLE", 0, 0);
	get<0>(t); //>>TURPLE


	//map - �L�[���[�h�ƒl�C�l�������̒l�D
	map<string, int> m;
	m["MAP"] = 0;
	m.size(); //>> 1
	m.count("MAP"); //true "MAP"�����邩�ǂ����D
	m.at("MAP"); //>> �i0 �Ȃ��ꍇ�ɂ̓G���[�j
	m["MAP"]; //>> 0 �i�����ꍇ�ɂ�"MAP"��0�ŏ������D�j
	m.erase("MAP");
	m.count("MAP"); //false
	m.size(); //>> 0

	//for�ɂ���Ď��o�����\�D
	for (pair<string, int> me : m)
	{
		cout << me.first << me.second << endl;
	}

	for (auto me : m)
	{
		cout << me.first << me.second << endl;
	}

	//queue - ����ʍs�̃f�[�^�\���D�����ւ̒ǉ��C�擪�̍폜�̂݁D
	queue<int> q;
	q.push(1); //{1}
	q.push(2); //{1,2}
	q.size(); //2
	q.pop(); //{2}
	q.pop(); //{}
	q.empty(); //true; �󂩂ǂ����D

	//���g�S�Ă�擪����o�́D
	while (q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}

	//priority_queue - �ł��傫���l�݂̂�Ԃ������\�D
	//����ȊO�̒l�̃A�N�Z�X�͕s�D
	priority_queue<int> pq;
	pq.push(1); //{1}
	pq.push(10); //{1,10}
	pq.push(5); //{1,10,5}
	pq.size(); //3
	pq.top(); //10
	pq.pop(); //{1,5}

	//set - �d���Ȃ��̃f�[�^
	set<int> s;
	s.insert(10); //{10}
	s.insert(10); //���������D{10}
	s.insert(1); //{10,1}
	//���[�v�ł͏��������Ɏ��o�����D
	for (auto val : s)
	{
		cout << val << endl;
	}

	//stack - ��������Ȃ��f�[�^�D�擪�̂݁D
	//�ǉ��E�폜���擪�̒l����s����D
	stack<int> st;
	st.push(5); //{5}
	st.push(1); //{1,5}
	st.pop(); //{5}

	//deque - stack�ɒǉ��ł��������ǉ��������́D
	//�擪�Ɩ����Œǉ��E�폜���\�D
	deque<int> dq;
	dq.push_back(10); //{10}
	dq.push_front(5); //{5,10}
	dq.push_back(1); //{5,10,1}
	dq.front();  //5
	dq.back(); //1
	dq.pop_back(); //{5,10}
	dq.pop_front(); //{10}


	//unordered_map

	//unordered_set

	//lower_bound / upper_bound

	//[�A�C�f�A]
	priority_queue���g���΃\�[�g�����Ղ��̂ł͂Ȃ����D
	*/


	//[�r�b�g�Z�b�g]

	//bitset  //�r�b�g�̔z��
	bitset<5> bit1;
	bitset<5> bit2;

	bit1.set(0, 1);
	bit2.set(0, 1);
	bit1.set(2, 1);
	cout << "bit1: " << bit1 << endl;
	cout << "bit2: " << bit2 << endl;
	cout << "bit1 & bit2: " << (bit1 & bit2) << endl;
	cout << "bit1 | bit2: " << (bit1 | bit2) << endl;
	cout << "bit1 ^ bit2: " << (bit1 ^ bit2) << endl;
	cout << "~bit1: " << (~bit1) << endl;
	cout << "~bit2: " << (~bit2) << endl;
	cout << "bit1 << 1:" << (bit1 << 1) << endl;
	cout << "bit2 >> 1:" << (bit2 >> 1) << endl;

	cout << "1 << 3: " << (1 << 3) << endl; //2^3

	//�r�b�g�S�T���E�E�E�g�ݍ��킹�̒T���D
	for (int i = 0; i < (1 << 5); i++)
	{
		bitset<5> bit(i);
	}

	return 0;
}