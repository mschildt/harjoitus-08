/*	Työn nimi: Harjoitus 8
	Tekijän nimi: Mikael Schildt
	
	Työn kuvaus:
	Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
	järjestyksessä (pienimmästä suurimpaan) näytölle
	(katso harj. 1 suunnitelma)
	a) käytä kokonaislukuja
	b) käytä liukulukuja (=reaalilukuja)
*/

#include <iostream>
using namespace std;

int main()
{
	int lukua;
	int lukub;
	int lukuc;

	int suurin;
	int keski;
	int pienin;

	cout << "Syota luku: ";
	cin >> lukua;
	cout << "Syota toinen luku: ";
	cin >> lukub;
	cout << "Syota kolmas luku: ";
	cin >> lukuc;

	if (lukua > lukub && lukua > lukuc)
		suurin = lukua;
	if (lukub > lukua && lukub > lukuc)
		suurin = lukub;
	if (lukuc > lukua && lukuc > lukub)
		suurin = lukuc;
	if (lukua < lukub && lukua < lukuc)
		pienin = lukua;
	if (lukub < lukua && lukub < lukuc)
		pienin = lukub;
	if (lukuc < lukua && lukuc < lukub)
		pienin = lukuc;
	if (lukua > pienin && lukua < suurin)
		keski = lukua;
	if (lukub > pienin && lukub < suurin)
		keski = lukub;
	if (lukuc > pienin && lukuc < suurin)
		keski = lukuc;


	cout << pienin << " " << keski << " " << suurin << "\n";

}
