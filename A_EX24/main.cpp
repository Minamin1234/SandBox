#include <bits/stdc++.h>
using namespace std;

// �ȉ��ɁA24���ԕ\�L�̎��v�\���� Clock ���`����

// Clock�\���̂̃����o�ϐ�������
//   int hour    ���Ԃ�\�� (0~23�̒l���Ƃ�)
//   int minute  ����\��   (0~59�̒l���Ƃ�)
//   int second  �b��\��   (0~59�̒l���Ƃ�)

struct Clock
{
public:
	int hour = 0;
	int minute = 0;
	int second = 0;
	void set(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
	}

	string to_str()
	{
		string RHour = to_string(hour);
		string RMin = to_string(minute);
		string RSec = to_string(second);

		if (hour <= 9) RHour = "0" + RHour;
		if (minute <= 9) RMin = "0" + RMin;
		if (second <= 9) RSec = "0" + RSec;

		string result = RHour + ":" + RMin + ":" + RSec;

		return result;
	}

	void shift(int diff_second)
	{
		if (diff_second >= 0)
		{
			hour += diff_second / 3600;
			diff_second = diff_second % 3600;
			minute += diff_second / 60;
			diff_second = diff_second % 60;
			second = diff_second;

			second = (second + diff_second) % 60;
			minute = (second + diff_second) % 60;
			diff_second = diff_second % 60;
			hour += minute / 60;
		}
		else
		{
			long long sec =
				hour * 3600 +
				minute * 60 +
				second;
			if (diff_second - sec < 0)
				sec = 86400 + diff_second;
			else
				sec -= diff_second;
			hour = sec / 3600;
			sec = sec % 3600;
			minute = sec / 60;
			sec = sec % 60;
			second = sec;
		}
	}
};

// �����o�֐� set �̒�`������
//   �֐���: set
//   ����: int h, int m, int s (���ꂼ�ꎞ�A���A�b��\��)
//   �Ԃ�l: �Ȃ�
//   �֐��̐���:
//     ���E���E�b��\��3�̈������󂯎��A
//     ���ꂼ��A�����o�ϐ� hour, minute, second �ɑ������

// �����o�֐� to_str �̒�`������
//   �֐���: to_str
//   ����: �Ȃ�
//   �Ԃ�l: string�^
//   �֐��̎d�l:
//     �����o�ϐ����\�������̕������Ԃ�
//     �����̕�����͎��̃t�H�[�}�b�g
//     "HH:MM:SS"
//     HH�AMM�ASS�͂��ꂼ�ꎞ�ԁA���A�b��2���ŕ\����������

// �����o�֐� shift �̒�`������
//   �֐���: shift
//   ����: int diff_second
//   �Ԃ�l: �Ȃ�
//   �֐��̎d�l:
//     diff_second �b���������o�ϐ����\��������ύX����(�������A���t�₤�邤�b�͍l���Ȃ�)
//     diff_second �̒l�����̏ꍇ�A������߂�
//     diff_second �̒l�����̏ꍇ�A������i�߂�
//     diff_second �̒l�� -86400 ~ 86400 �͈̔͂���Ƃ肤��


// -------------------
// ���������͕ύX���Ȃ�
// -------------------

int main() {
	// ���͂��󂯎��
	int hour, minute, second;
	cin >> hour >> minute >> second;
	int diff_second;
	cin >> diff_second;

	// Clock�\���̂̃I�u�W�F�N�g��錾
	Clock clock;

	// set�֐����Ăяo���Ď�����ݒ肷��
	clock.set(hour, minute, second);

	// �������o��
	cout << clock.to_str() << endl;

	// ���v��i�߂�(�߂�)
	clock.shift(diff_second);

	// �ύX��̎������o��
	cout << clock.to_str() << endl;
}
