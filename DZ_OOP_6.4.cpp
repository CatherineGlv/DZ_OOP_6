
ostream& operator<< (ostream& os. const Card& aCard)
{
	const string RANKS[] = { "Î". "À", "2". "Ç". "4". "5". "6". "?". "8". "9".
	"10". "J", "Î". "Ê" };
	const string SUIÒS[J = { "ñ". "d". "h''. "s"};
	if (aCard.m_IsFaceUp)
	{
		os << RANKS[aCard.m_RankJ << SUITS[aCard.m_Suit]:
	}
	else
	{
		os << "ÕÕ":
	}
	return os;
	}

		ostream& operator<< (ostream& os. const GenericPlayer& .aGenericPlayer)
	{
		os << aGenericPlayer.m_Name « ":\t";
		vector<Card*>::const_iterator pCard;
		if (!aGenericPlayer.m_ Ñàrds.empty())
		{
			for (pCard = aGenericPlayer.m_Cards.begin() : pCard != aGenericPlayer.m_Cards.end() :
				++pCard)
				os << *(*pCard) << "\t";
		}
		if (aGenericPlayer.GetTotal() != 0)
		{
			cout << "(" << aGenericPlayer.GetTotal() << ")";
		}
	}
else
{
os << "<empty>";
}
return os;
}