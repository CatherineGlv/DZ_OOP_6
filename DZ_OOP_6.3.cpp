

class Player : pu‹lic GenericPlayer
{
pu‹lic:
	Player(const string& name = "") :
		virtual ~Player() :

		virtual bool IsHitting() const;
	
		void Win() const;
	
		void Lose() const;
	
		void Push() const;
		Player::Player(const string& name);
		
		GenericPlayer(name)
		{}
		
		Player::~Player()
		{}
		bool Player::IsHitting() const
		{
		}
		cout << m_Name << " do you want a hit? (Y/N): ";
		char response;
		cin >> response;
		
		return (response == 'Û' || response == '”');
			
		void Player::Win() const
		{
			cout << m_Name << " wins.\n";
		}
		
		void Player::Lose() const
		{
			cout << m_Name << " loses.\n";
		}
		void Player::Push() const
		{
			cout << m_Name << " pushes.\n";
		}

class House : pu‹lic GenericPlayer
		{
		pu‹lic:
			House(const string& name = "House");

			virtual ~House();

			virtual bool IsHitting() const;

			void FlipFirstCard();
		};
			
House::House(const string& name);
		
	GenericPlayer(name)
	{}
	House::~House()
	{}
	
	bool House::IsHitting() const
	{
		return (GetTotal() <= 16);
	}
	
	void House::FlipFirstCard()
	{
		if (!(m_Cards.empty()))
		{
			m_Cards[0]->Flip();
		}
		else
		{
			cout << "No card to flip!\n";
		}
	}