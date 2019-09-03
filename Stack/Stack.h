#pragma once
const int N_SIZE = 100;

struct stack {
	int len;            // ���������� ��������� � �����
	int* elem;		    // ������ ��� �������� ���������
	int real_len;	    // ��������� ������ �������

	stack() {			// �����������
		int* n = new int[N_SIZE];
		elem = n;
		len = 0;
		real_len = N_SIZE;
	}   

	~stack() {			   // ����������
		delete[] elem;
	}        

	void push(int k);      // �������� � ���� ����� �������

	int pop();             // ������� �� ����� ��������� �������
						   // � ������� ��� ��������

	int back();            // ������� �������� ���������� ��������

	int size();  		   // ������� ���������� ��������� � �����

	void clear();          // �������� ����
};
