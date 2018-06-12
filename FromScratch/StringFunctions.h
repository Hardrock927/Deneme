#pragma once
#include<string>
#include <vector>
using namespace std;


string removeChar(string sentence, char value) {
	string newSentence;

	for (size_t i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] != value) newSentence += sentence[i];
	}

	return newSentence;
}

bool checkForString(string sentence, string val) {
	int flag = 1;

	for (size_t i = 0; i < sentence.length(); i++)
	{
		flag = 1;
		if (sentence[i] == val[0]) {
			for (size_t k = 0; k < val.length(); k++)
			{
				if (sentence[i + k] != val[k]) {
					flag = 0;
					break;
				}
			}
			if (flag == 1) return true;
		}
	}

	return false;
}

string replace(string val,string sentence) {
	int flag = 1; size_t i, k;
	
	for (i = 0; i < sentence.length(); i++)
	{
		flag = 1;
		if (sentence[i] == val[0]) {
			for (k = 0; k < val.length(); k++)
			{
				if (sentence[i + k] != val[k]) {
					flag = 0;
					break;
				}
			}
			if (flag == 1) {
				sentence.replace(i, val.length(), "laaan");
				return sentence;
			}
		}
	}

		return "fail";
}