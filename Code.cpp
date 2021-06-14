#include <iostream>
#include <stdio.h>
using namespace std;

string choiceone;
string choicetwo;
string choicethree;
string search;
string take;
string beg;
string go;
string walk;
string stop;
string yes;

void rules()
{
	cout << "\t\t\t\t\t\t *** RULES ***\n\n";
	cout << "\t\tYou are not allowed to type anything apart from options. Everythng else will lead to restart\n";
	cout << "\t\tWhen answering, type your choice in lowecare.\n\n";
}

void prologue()
{
	cout << "\t\t\t\t\t\t PROLOGUE\n\n";
	cout << "A homeless man trying to survive the day. A man loosing his job. One choice can define the end.\n\n\n";
}

void peace()
{
	cout << "I left eveything behind and walked up to the center througth the alley.\n\n\n";
}



void choisetwoa()
{
	cout << "That was close. I stand up and walk towards the car. Oh God! The driver's ead is bleeding from the head and it's my fault.\n";
	cout << "A man came and tryied to pull him out of the car. He is moving his arms.\n";
	peace();
	cout << "I must leave. I run away as fast as I can. Do you think he is alive? I really hope so...\n\n\n";
	
}



void standup()
{
	cout << "I'd better keep moving. Who knows, maybe I'll have the chance to eat something.\n";
	cout << "I leave my cardboard in the bench and walk on the sidewalk of the street.\n";
	cout << "The neighborhood here is full of all kinds of stores. Restaurants, clubs, coffe shops.\n";
	cout << "It's easy to find people to beg, although I don't want to. I don't want them to feel sorry for me.\n";
	cout << "As I was walking down the street with my head looking down, I found myself in the middle of the road.\n";
	cout << "A car is coming towards me in high speed.\n"; 
	cout <<  "Quickly, I have to jump! But where to ? Left on the sidewalk or right in the other side of the road?\n";
	cin >> choicetwo;
	if (choicetwo == "left")
	{
		choisetwoa();
	}
	else if (choicetwo == "right")
	{
		while (choicetwo == "right")
		{
			cout << "\n\n< You saved your life but the driver went throught the sidewalk. Inoccent people died. Restart\n";
			cout << "Quickly, jump.Where ? Left in the sidewalk or right in the other side of the road?\n";
			cin >> choicetwo;
			if (choicetwo == "left")
			{
				choisetwoa();
			}
		}

	}
	else
	{
		while (choicetwo != "left" && choicetwo != "right")
		{
			cout << "Dead. Restart of the game\n";
			cout << "Quickly, jump.Where ? Left in the sidewalk or right in the other side of the road?\n";
			cin >> choicetwo;
		}
	}
}




void stay()
{
	cout << "Ok. A little more sleep won't hurm nobody...\n";
	cout << "< After twenty minutes\n";
	cout << "No, I can't. All this noise of the city. The cars, the people.\n"; 
	cout << "They just don't know how to take pleasure of little things such as quiet.\n";
	cout << "Anyway, it's time to stand up.";
	cout << "I feel pretty good today, I think I'll go to the center from the park, the weather is nice.\n";
	peace();
}




void dead()
{
	cout << "120 kilometers per hour.\n";
	cout << "Suddenly, a man appears on the road.\n";
	cout << "He looks like he is homeless. His clothes were torn, we was wearing sandals. I couldn't see anything else.";
	cout << "I can't do anything else besides hurting only myself.\n"; 
	cout <<"I turned the weel to the right side of the road / n";
	cout << "The last thing I remember was me getting out of the car.\n";
	cout << "The homeless man was running away. I moved my hands trying to speak but it was worthless...\n\n";
	cout << "I wake up in the hospital. I had small injuries so I left in the afternoon.\n";
	cout << "Time 13:02 p.m\n";
	cout << "My boss called me. I'm out of the bussines because I am unable to work...\n";
	cout << "I can't belive what is happening! It was our only source of income and now it's gone...\n\n\n";
}

void choicefour()
{
	cout << "The little girl walked away and left with a woman, probably her mother. I waved at her and said thanks.\n";
	cout << "You don't come across kind people so often these days";
}

void chathreeend()
{
	cout << "I sat down on a bench to relax for the rest of the day. There's nothing more to do. Maybe a walk,\n";
	cout << " but nothing special. You see, when you have no job, family or responsibilities, \n";
	cout << "you have all the time in the world..\n\n";
}



void chathreep()
{
	cout << "I can't stop thinking about that man in blood... What if he is dead? What if he had a family?\n";
	cout << "God I can't believe he died because of me. Because I wasn't paying attention. So stupid...\n";
	cout << "I need food right now. Maybe I should search my pockets?";
	cin >> search;
	cout << "Of course there is nothing in them. I have to go somewhere. Let's go to check restaurants for food, I know one right here.\n";
	cout << "I am outside the restaurant. I tidy up my hair, appearance matters these days. I walk inside and ask if anyone bought something for homeless people.\n";
	cout << "The waiter came back with a bag in his hands. I don't remember being happier than now this week.\n";
	cout << "'A little girl came today and bought these. They said to have a nice day and keep smiling sir.'\n";
	choicefour();
	chathreeend();
}



void chaOne()
{
	cout << "\t\t\t\t\t\tCHAPTER ONE: DAY ZERO\n\n\n";
	cout << "Monday. Maybe 23rd, maybe 24th. I don't remember the date. I opened my eyes and saw the leaves of a plane tree.\n";
	cout << "I love these trees. They are so tall, they can see beyond people. And yet the trees take care of them.\n";
	cout << "They provide peole with their shadows.\n";
	cout << "It is beautifull here. No one wants to sit in the bench so I am here alone. Alone and hungry\n";
	cout << "What should I do ? Get up or stay ? \n";
	cin >> choiceone;
	if (choiceone == "get up")
	{
		standup();
	}
	else if (choiceone == "stay")
	{
		stay();
	}
	else
	{
		while (choiceone != "get up" && choiceone != "stay")
		{
			cout << "Wrong. Restart";
			cout << " What should I do? get up or stay?\n";
			cin >> choiceone;
		}
	}

}



void chatwo()
{
	cout << "\t\t\t\t\t\tGHAPTER TWO: FAILURE\n\n\n";
	cout << "Monday 13/06/2010";
	cout << "Time 10:05 a.m\n\n";
	cout << "I woke up and brushed my teeth. I gave my kids a kiss and we ate breakfast. I wish we could have a day together.\n";
	cout << "My breakfast consists of a boiled egg and lots of bacon.Nothing more, nothing less. I feel blessed I even have these things.\n";
	cout << "Time 10:25 a.m\n";
	cout << "I am late for work. Great, I need to hurry up. I took my car and left the house. It's around 10 minutes away by car.\n";
	cout << "Time 10:30 a.m\n";
	cout << "The road is empty.I speed up a little bit in order to be there as fast as I can.\n";
	if (choiceone == "get up")
	{
		dead();
	}
	else
	{
		cout << "Maybe I shouldn't run so fast. I have people who want me to return home at the end of the day.\n";
		cout << "Time 10:45 a.m\n";
		cout << "I am at work";
		cout << "The boss is coming towards me.\n";
		cout << "'Tom, I need you for a job. You will be the leader of a group studying the economics of the company.'\n";
		cout << "'You will have your own desk. You have 3 days to get it done.'\n\n\n";
	}
}


void chathree()
{
	cout << "\t\t\t\t\t\tCHAPTER THREE: HAPPINESS\n\n\n";
	cout << "Tuesday\n";
	cout << "Location: Center\n\n";
	if (choiceone == "get up")
	{
		chathreep();
	}
	else
	{
		cout << "There are a lot of people in the center. It is a big town and even tourists come here for vacation.\n";
		cout << "A little girl came as I was walking:\n";
		cout << "'Hello sir. I have this sandwitch with me and I don't want it. Do you want it yes or no?'\n";
		cin >> take;
		if (take == "yes")
		{
			cout << "Thank you very much. I appreciate it.\n";
			choicefour();
		}
		else if (take == "no")
		{
			cout << "Thank you very much. But you should eat it, to become strong and tall.\n";
			choicefour();
		}
		else
		{
			cout << "Wrong answer. Restart of the game\n\n";
			cout << "A little girl came as I was walking:\n";
			cout << "'Hello sir. I have this sandwitch with me and I don't want it. Do you want it yes or no?'\n";
			cin >> take;
			if (take == "yes")
			{
				cout << "Thank you very much. I appreciate it.\n";
				choicefour();
			}
			else if (take == "no")
			{
				cout << "Thank you very much. But you should eat it, to become strong and tall.\n";
				choicefour();
			}
		}
		chathreeend();
	}
}

void misserable()
{
	cout << "How am I going to tell my wife? That we can't afford paying the house? the car? No, I... I can't.\n";
	cout << "She might want to leave with the kid if she finds it out. I don't blame her. No I wïn't tell her. I will find money\n";
	cout << "I will stay home today. I'll pick my kid from school after a long time, maybe even check some job applications.\n";
	cout << "I may have lost my job but, at the end of the day, our family is the most valuable thing we have.\n";
	cout << "You know how it goes. When you have a family, your job is to make sure they are always safe and comfortable, no matter what.\n";
	cout << "Even if you don't have a job...\n\n";
}

void happy()
{
	cout << "First day of my new job. Talked with my wife. She is really happy that I was selected for the research.\n";
	cout << "Noone else in the company has achieved to be leader in such a small period, other than me.\n";
	cout << "It is my chance. If I succeed in this, I may get this promotion I always wanted.\n";
	cout << "I went in the company very early today. My kid didn't saw me but all this is for her. So she can have everything she wants.\n";
	cout << "I didn't have all the comforts in my life. And I dodn't want her to be the same.\n";
	cout << "You know how it goes. When you have a family, your job is to make sure they are always safe and comfortable, no matter what.\n";
	cout << "Especially when you have a succesfull career life.\n\n";
}


void chafour()
{
	cout << "\t\t\t\t\t\tCHAPTER FOUR: LONELINESS\n\n\n";
	cout << "Wednesday\n\n";
	if (choiceone == "get up")
	{
		misserable();
	}
	else if (choiceone == "stay")
	{
		happy();
	}
	
}

void church ()
{
	cout << "Ok then. I will go to the church. I will put a bottle in front of me and I will let the people decide\n";
	cout << "if they want to help.\n";
	cout << "It's better to sleep there than behind trush either way...\n\n";
	cout << "Afternoun\n\n";
	cout << "I'm here. I am outside of the church, a couple of meters away from the entrance.\n";
	cout << "It feels a bit weird. I've never begged in my life. I didn't chose to be homeless. To be broke.\n";
	cout << "The time is 11:03. Should I sleep or go inside?\n";
	cin >> go;
	if (go == "sleep")
	{
		cout << "I don't think so. I am sleeping all the day.";
	}
	else if (go == "go inside")
	{
		cout << "I am not that religious. But why not. It is for everyone, right?\n";
	}
}

void chafive()
{
	cout << "\t\t\t\t\t\tCHAPTER FIVE: FAITH\n\n\n";
	cout << "Thursday\n\n";
	cout << "The night was unusual. I didn't slept in my bench because there were people sitting until late.\n";
	cout << "I took my stuff and slept in an alley behind some carbage bins. I coulsn't say it was a good experience.\n";
	cout << "It keeps being difficult. I didn't eat anything all night.I need help. Maybe I should beg...\n";
	cout << "But where? center? or the church?\n";
	cin >> beg;
	if (beg == "center")
	{
		cout << "I don't think it's a good idea. People are not so kind these days. Maybe I have a better chance in the church\n";
	}
	else if (beg == "church")
	{
		cout << "Yes. I thought so too.\n";
	}
	church();
	cout << "I don't have any money to give. But anyway, here I am. My first step inside. So here is God's home eh?\n";
	cout << "I look up and is full of drawings. Very impressive and at the same time very simple.\n";
	cout << "It feels emparassing for a man dressed like me to be in here. I feel very...small.\n";
	cout << "The ceremony is starting in a few minutes. I think it would be interesting to stay\n";
	cout << "I took a seat at the back of the room and stayed there. The sound is very relaxing.\n";
	cout << "It helps your mind to travel in your thoughts... I think I like it here.\n\n\n";
}


void chasix()
{
	cout << "\t\t\t\t\t\tCHAPTER SIX: DISSAPOINTMENT\n\n\n";
	cout << "Friday\n\n";
	cout << "I slept really peaceful this night. It was like I had no worries. My son and I decided to take a day off today from our responsibilities\n";
	cout << "and go for a walk. We needed that, to be honest. Both of us. It is a very sensitive relationship beetween father and son.\n";
	cout << "It only takes one bad moment and your child won't even want to talk to you again.";
	cout << "'Hey dad. Where do you want to go today? I would like to go for a walk near the church. Take some ice cream and stay there'\n";
	cout << "'What do you think? yes or no?'\n";
	cin >> walk;
	if (walk == "yes")
	{
		cout << "Great! It will be very cool.\n";
	}
	else if(walk == "no")
	{
		while (walk == "no")
		{
			cout << "Failed. As a father, your kids are above everything. Game restarted...\n\n\n";
			cout << "'Hey dad. Where do you want to go today? I would like to go for a walk near the church. Take some ice cream and stay there'\n";
			cout << "'What do you think? yes or no?'\n";
			cin >> walk;
			if (walk == "yes")
			{
				cout << "Great! It will be very cool.\n";
			}
		}
	}

	cout << "I know I am not that religious but I wouldn't say no to my child.\n";
	cout << "We dressed up took our breakfast and left the house. It is a nice day, not even a single cloud in the sky.\n";
	cout << "There are not many people today, even better, that's why we chose to come today.\n\n";
	cout << "We arrived at the church and stayed in a bench for a while. It was nice to hear the ceremony.";
	cout << "Not far from us, a homeless man was sitting. He seem like he was enjoying the ceremony, just like us.\n";
	cout << "'It's very strange dad. To be around these people. They need our help, and yet we don't do anything at all'\n\n";
	cout << "My son was right. We live together in a world and yet we try to be the best. We push so hard\n";
	cout << "only to hear people say that we are good at something. We care too much about what others will say, and we lose the point\n";
	cout << "We wake up to go to work, we work to pay the bills at the end of the month and then again.\n";
	cout << "We can't see that people need help. Our help...\n\n";
	cout << "My son stood up and walked towards that man\n";
	cout << "Should I stop him? yes or no?";
	cin >> stop;
	if (stop == "no")
	{
		cout << "No. He is going to give him his ice cream. I raised a very good kid. A human...\n\n";
	}
	else if (stop == "yes")
	{
		while (stop == "yes")
		{
			cout << "Wrong answer. People need your help out there. Game restart\n\n";
			cout << "My son stood up and walked towards that man\n";
			cout << "Should I stop him? yes or no?";
			cin >> stop;
			if (stop == "no")
			{
				cout << "No. He is going to give him his ice cream. I raised a very good kid. A human...\n\n";
			}
		}
	}
	cout << "He stood next to him. He was almost asleep, or that's what he was looking like. He was smelling. His clothes were ripped apart\n\n";
	cout << "He left his ice cream next to the man and returned to me. I took out my wallet and threw some coins in a bottle next to him.\n";
	cout << "'He didn't realized we were there. He will wake up and believe god helped him. That's more satisfying.'\n";
	cout << "My son is right. We don't have to take credits for our good actions. Doing them is enougth\n\n\n";
}

void end()
{
	cout << "I couldn't hold my tears. there were enought money to pass the week. They also gave me ice cream.\n";
	cout << "Actions like this restore my faith in humanity. I will never forget them...\n\n\n";
}


void chaseven()
{
	cout << "\t\t\t\t\t\tCHAPTER SEVEN : HOPE\n\n\n";
	cout << "Friday\n\n";
	cout << "I woke up early this morning. I checked the bottle and nothing was inside.\n";
	cout << "Great. One more day without food. I can't think of another way to find food and water.\n";
	cout << "I am tired, weak. I can't stand up so why not just staying here?\n";
	cout << "I'll just hear the bels and... and the people coming to pray.\n";
	cout << "Before I knew it my eyes closed. I wasn't asleep.\n";
	cout << "Suddenly I heard footsteps coming towards me. I didn't opened my eyes, I don't want to scare anyone.\n";
	cout << "Whoever was, he left me something next to me. After a couple of seconds I heard cons dropping in the bottle.\n";
	cout << "Oh my god...\n";
	cout << "I instantly opened my eyes, and saw a man and a little boy.\n";
	if (choiceone == "get up")
	{
		cout << "It's him... I... I thought he was dead, it's the man from the accident. He haw a kid? Damn...\n";
		cout << "I must talk to him yes or no?\n";
		cin >> yes;
		if (yes == "yes")
		{
			cout << "I run behind them. 'Thank you', I said.\n";
			cout << "The man turned around, hewaven his head and said 'have a nice day sir.'\n";
		}
		if (yes == "no")
		{
			while (yes == "no")
			{
				cout << "Wrong. You must be always thankful of the things you have and the people who helped you. Restart\n\n";
				cout << "It's him... I... I thought he was dead, it's the man from the accident. He haw a kid? Damn...\n";
				cout << "I must talk to him yes or no?\n";
				cin >> yes;
				if (yes == "yes")
				{
					cout << "I run behind them. 'Thank you', I said.\n";
					cout << "The man turned around, hewaven his head and said 'have a nice day sir.'\n";
				}
			}
		}
		end();
	}
	else if (choiceone == "stay")
	{
		end();
	}
}

int main()
{
	rules();
	prologue();
	chaOne();
	chatwo();
	chathree();
	chafour();
	chafive();
	chasix();
	chaseven();
	return 0;
}