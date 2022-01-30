#include <bits/stdc++.h>

using namespace std;

int main()
{
	/*//pair - 2つ組のみ
	pair<int, int> p(0, 0);
	p.first; //>>0
	p.second; //>>0

	//tuple　n種類で一組．(ここでは，3種類で一組．)
	tuple<string, int, int> t("TUPLE", 0, 0);
	get<0>(t); //>>TURPLE


	//map - キーワードと値，値から特定の値．
	map<string, int> m;
	m["MAP"] = 0;
	m.size(); //>> 1
	m.count("MAP"); //true "MAP"があるかどうか．
	m.at("MAP"); //>> （0 ない場合にはエラー）
	m["MAP"]; //>> 0 （無い場合には"MAP"に0で初期化．）
	m.erase("MAP");
	m.count("MAP"); //false
	m.size(); //>> 0

	//forによって取り出しも可能．
	for (pair<string, int> me : m)
	{
		cout << me.first << me.second << endl;
	}

	for (auto me : m)
	{
		cout << me.first << me.second << endl;
	}

	//queue - 一方通行のデータ構造．末尾への追加，先頭の削除のみ．
	queue<int> q;
	q.push(1); //{1}
	q.push(2); //{1,2}
	q.size(); //2
	q.pop(); //{2}
	q.pop(); //{}
	q.empty(); //true; 空かどうか．

	//中身全てを先頭から出力．
	while (q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}

	//priority_queue - 最も大きい値のみを返す事が可能．
	//それ以外の値のアクセスは不可．
	priority_queue<int> pq;
	pq.push(1); //{1}
	pq.push(10); //{1,10}
	pq.push(5); //{1,10,5}
	pq.size(); //3
	pq.top(); //10
	pq.pop(); //{1,5}

	//set - 重複なしのデータ
	set<int> s;
	s.insert(10); //{10}
	s.insert(10); //無視される．{10}
	s.insert(1); //{10,1}
	//ループでは小さい順に取り出される．
	for (auto val : s)
	{
		cout << val << endl;
	}

	//stack - 一つ口しかないデータ．先頭のみ．
	//追加・削除も先頭の値から行われる．
	stack<int> st;
	st.push(5); //{5}
	st.push(1); //{1,5}
	st.pop(); //{5}

	//deque - stackに追加でもう一つ口を追加したもの．
	//先頭と末尾で追加・削除が可能．
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
	*/
	return 0;
}