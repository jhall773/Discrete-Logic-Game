#include "levelAndWorld.hpp"

int main()
{
    //Setting Up the Game's Levels
    World wOne;
    wOne.setName("World1: Gambling and Guessing");
    
    Level lOne;
    lOne.setIsLevelOne(true);
    lOne.setName("Level 1: Let me Borrow Some Coins, kid!");
    lOne.setDialogue("\nNarrator: As Crytsine and her little brother Zeke arrived in this first town, they first noticed a game that looked appealing to them. They thought maybe they could get some extra coins from it perhaps to help them later down the line. Unfortuenately for them though, the game required you to gamble two coins of which were already in one's possession in order to obtain a third. So, as they were walking around, they noticed a boy, obviously looking longingly into the window of a bakery, starving.\nCrystine: Don't have enough, kiddo? (she says, noticing the coins in his palm)\nCrystine: Look, we really need a couple of coins right now for us to get some supplies. We're going on a long journey ok? We have some fruit and some bread here already. Giving us those coins in exchange for some of our food is probably be a lot more than what most others would make you pay for it. So what do you say?\nBoy: Psshh! How do you even know I have any coins, huh? Well (he reconsiders after his stomach makes another growl), how about this? Let's say I did have some coins. I have an odd number or an even number of them. I'll let you know now that I don't have an even number of coins. So, do I have an odd or an even number of them? If you can figure out the answer, then I'll share them with you (He said this, thinking in his naiveness as a little boy that he made a rather difficult and clever game for them).\n");
    lOne.setInstructions("Narrator: Please type the response \"odd\" or \"even\":");
    lOne.setAnswer("odd");

    Level lTwo;
    lTwo.setIsLevelTwo(true);
    lTwo.setName("Level 2: Card Tricks");
    lTwo.setDialogue("\nAfter the boy gave up five of his coins, Crystine and Zeke decide to go back and get a bargin at the gambling spot to get some extra change.\nGambling Dealer: Alright squirts! Two coin entry fee, you got it? We're not charity and we're not your baysitters!\nZeke: I'll say. Look kind of rough to be one of those anyway...Ow! (Crystine elbowed her little brother to shut up his snarking)\nCrsytine: Here you go! So, what do we have to do to win!\nGambling Dealer: Alright, ya payed up, so I guess you're serious. (He deals a card for the gamble) I got a card here with a certain number. If you guess it, we'll give you three coins back, so you'll get one as a return for you're investment. Don't go blaming us though if you lose more than you gain for taking the L! Ready for the clues?\n(Crystine and Zeke): Yep!\nGambling Dealer: Good! So, my number is divisible by 5. My number is also even. But, my number is less than 20. So, get on with it already! Guess the card's number!");
    lTwo.setInstructions("Narrator: Please type an integer(number) that is less than 20, divisible by 5, and even: ");
    lTwo.setAnswer("10");

    Level lThree;
    lThree.setName("Level 3: Every Oldy's Lucky Number");
    lThree.setDialogue("\nNarrator: After Crystine and Zeke correctly guessed the number the Dealer pulled, another gambler, playing cards at a nearby table commented on the number itself.\nCards Player: Yeah! Us rusted bolts, we always wish we could go back a few huh? Man, if I had to choose a lucky number beween 1 and 1000, 1 Decade back in time would do the trick. At least I still had some growing up top, you know what I mean? (He reminisces, rubbing his bald head). The rest of the guys in the Gambling joint have a laugh and then a shared sign of agreement.\nNarrator: When Crsytal and Zeke were ready, they decided to travel on to the next land. When they arrive at the entrance though, there was a guard taking entrance fees.\nGuard: Well hey there youngins! Entrance fee's 20 coins. Zeke: 20?! Dude, seriously? Crystine:(Giving her little brother a look and making demands for him to shut up under her grited teeth) Don't mind him sir. We were just- a bit supprised at how costly our trip would be. We're definitley not from around here...-and um-,unforteounately sir, -we weren't aware that there would be any kind of fee.\nGuard: (Makes a suggestion after pondering for a while) Well, I guess I got some extra change to spare. It would be nice to have some company here, since thre usually aren't a whole lot of people around when we're not in rush hour. I'd say they pay me pretty well here. So I tell you what. I'm thinking of a number between 1 and 1000. You guys are welcome to stay and chat with me as long as you like if you think it'll help. If you can guess my number, I'll use some of my extra change to pay for you kids to pass. Sound like a deal?\nCrystine: Oh yes, thank you, sir! My brother and I definitely accept your so very kind gesture.\nZeke: So, you said we could ask you anything that could help us solve the number you're thinking of. You're pretty old right?!\nCrystine: ZEKE! (She yells at him in fustration for his rudeness.)\nGuard: Oh, that's alright! No need to hush the boy. Kids will be kids. But, I suppose I don't look too youthful will all this gray scruffle and shininess up top, huh? (He jokes in accordance to his light beard and bald head before having a lighthearted chuckle about it) Narrator: So the two young guns talked with the guard for hours, listening to him give a whole spew about what his life was like when he was their age, how he used to be a soldier for the land he was guarding, and how he got to where he was now. You know, basically his whole life story (but nothing too interesting). Eventually though, it got time for Zeke and Crystine to give an answer.\nGuard: Alright now, the gate is gonna close soon for the night. You kiddos shouldn't be up too late after dark anyway. So... what you got?\nZeke: (Reminds Crystine about his age and about what one of the guys at the gambling spot said about his lucky number.)\nNarrator: Well. Please type in a number between 1 and 1000 for Crystine and Zeke to answer with that will let them past the gate");
    lThree.setInstructions("Narrator: Please type an integer (positive whole number) between 1 and 1000: ");
    lThree.setAnswer("10");


    World wTwo;
    wTwo.setName("World2: Sense of Direction");

    ItemHouse lFour;
    lFour.setName("Level 4: Item Shop!");
    lFour.setWorldPosition('f');
    lFour.setOptions("\nNarrator: After Crystine and Zeke guessed the correct number from the seasoned guard to get through the gate, they decide to stop at an item shop for supplies...\nNarrator: Welcome to the item shop! (You may only purchase 1 item durring your visit)\nPlease press the \"a\" key to buy some Fruit (1 life) for one coin.\nPlease press the \"c\" key to buy a compass(1 Hint) for one coin.\nIf you do not want to make a purchase and would like to save your money, press the \"s\" key.");
    lFour.setHint("For Level 5: Remember that the disjunctive form of a conditional \"p -> q\" or \"if p then q\" is \"(~p V q)\" or \"not p or q\".");

    Level lFive;
    lFive.setName("Level 5: Meeting a Native of Bridgetown");
    lFive.setDialogue("\nNarrator: When Crystine and Zeke were done shopping, they decided to talk to the merchant for a while. He told them a little bit about the area they are in now, and decided to mention a little bit about the people from Bridgetown.\nMerchant: I don't know why, but there's something funny going on upstairs with those Bridgetown people (He said while pointing to his head to suggest whay he meant by \"upstairs\"). I don't know what it is with those people, but I 've come to realize that you got to \"NEGATE\" any sentence they say!\nZeke: Oh! I get it. So they're basically just liars! (He snarks, before Crystine tries to hush his rashness)\nNarrator: As they were talking, a guy from Bridgetown came in, just as Crystine was mentioning to the merchant that they were headed to the next closest land they could get to to get more shelter and directions before trying to reach the Kingdom of the Feverless.\nMerchant: Hmm...I'm not sure about that kingdom you mentioned...But I do know that the safe path that actually leads to the next land is either \"The path on the left with the trees OR the path on the right with the bridge. (P OR Q)\" Unforteounately, I just can't remember which one.\nGuy From Bridgetown: Hey! \"The path on the right with the bridge is safe IF the path on the left with the trees is safe! (if P then Q)\"\n");
    lFive.setInstructions("Narrator: Assuming the merchants words are true, and the sentence of the guy from Bridgetown needs negating, logically determine which path direction you should take. Please type your answer as either \"right\" or \"left\": ");
    lFive.setAnswer("left");

    Level lSix;
    lSix.setName("Level 6: The Bridgetown Couple");
    lSix.setDialogue("\nSince Crystine and Zeke got their information to take the left path to the next town, they found themselves getting a little weary. To make matters worse, it started to rain as well as they were traveling. Luckily, an elderly woman yelled from her home outside for Crystine and Zeke to come inside.\nElderly Woman: (introducing herself and her Husband) Hello dears. I'm Ann. And this silver-fox over here is my wonderful husband Brawny. He's from Bridegtown. You know, a lot of people don't seem to understand Bridetwon-ers, but some of them are actually quite the sweethearts once you get to know them (She says, winking at her beloved Brawny).\nZeke: Are you from Bridegtown, lady? They say old people usually have a lot of knowledge, so maybe you can give us some directions? (Crystine then quickly chastizes him)\nAnn: Oh no, dear he's fine. (Ann assures Crystine before answering her little brother that she is NOT from Bridgetown.)\nCrystine: (Explaining a little bit about their current situation trying to get to the next land and to their ruler's quarters asks) Do you think you could help us? Any information you know of you could share with us would greatly be appreciated.\nAnn: I know that there should be a gate to a mainland not too far from here. \"The gate is either by the pier near the lake OR it is by Tanner's Old Tinker Shop, but NOT BOTH. (P OR Q, but NOT P AND Q)\"\nBrawny: \"I thought it was by the pier AND NOT by Tanner's Old Shop. (P AND NOT Q)\"\nAnn: No, I don't think so, hun... I'm pretty sure it was one OR the other, but not BOTH.\nBrawny: (A little while later) Alright honey, I'm not going to bed. I don't love ya! I'm not glad you brought the kids inside. Wish them bad luck on their little adventure!\nAnn: Alright hun, Love you too! Sleep tight! I'll be sure to wish the kids good luck on their big adventure. Narrator: Ann continues to make small talk with Crystine and Zeke, and mentions that Tanner might know more about the King's quarters or would know someone who does since he's had a long career meeting multiple people from all over.");
    lSix.setInstructions("Narrator: Assuming Ann's words are true, and the sentence of the Brawny needs negating, logically determine which path direction you should take. Please type your answer as either \"btp for by the pier\" or \" bTs by Tanner's shop\":");
    lSix.setAnswer("bTs");


    World wThree;
    wThree.setName("World3: Machinery, Mining, Validity, then Victory!");

    Level lSeven;
    lSeven.setName("Level 7: Why did You Touch Anything?!");
    lSeven.setDialogue("\nNarrator: After Crystine and Zeke got some rest after drinking some warm tea prepared by Ann, Crystine and Zeke went to the next land, asking around and looking at road signs until they arrived at Tanner's Tinker shop. The \"old\" part however, was something they had not yet discovered.\nZeke: C'mon man, for real?! What's he need a sign up for just to tell everybody he's done with them! (He  after seeing the large \"RETIRED\" sign outside the door, cracking up at the remark in his second sentence)\nCrystine: This shop is probably also this man's home. I sure he wanted to live in peace Zeke, and too many people kept bothering him thinking becasue he was home that he was in buisiness to help them with all their gadgets and such.\nZeke: Gadgets?\nCrystine: You can't tell? Look at all those clocks and old machines. All those old tools lying around inside too. He must've been a tinker, a fix-it maestro of some kind. And he must've been a pretty good one considering the sign on his door. Narrator: Crystine decides to give the door a little knock.\nA well aged gentleman with some glasses only fitting for a Tinker answered the door.\nTanner: Well hello there kiddos? What can I do for you today, eh? And uh, I'm actually retired from my tinkering days, so I hope you weren't looking for anything on that end, but I might be able to get you guys something or get you to someone who can help.\nCrystine: Well thank you kind sir, but actually, we were told from a nice couple in the last town that you might be able to direct us to the King of this land. We know it's not likely for us to see him, but we have something very importiant to inquire him about. An inquiry so very importiant that we are hoping to give to him in person.\nTanner: (Supprised by these young persons speaking boldly with so much courage about inquirring the king) Oh my. Well, he is a very difficult man to reach from what I hear. Far from here I would say, but... probably not \"longitudinal\" in the way you would think. Why don't you kids come on inside for a bit. Just be sure not to touch anything around here ok? The machines and some of the inventions and gadgets Iv've been trying to work on a a little figgity. You know, \"works in progress\" that stopped being in, -well, progress.\nCrystine: Yes, thank you for the invitation sir. WE COMPLETELY AND TOTALLY UNDERSTAND. RIGHT BROTHER?! (She says through her teeth while looking scoldingly at Zeke to warn him ahead of time)\nZeke: Pfft. I don't know what she's looking at me for. Why would I want to mess with someone's dingy old stuff that doesn't even work anyway!\nCrystine: ZEKE!\nTanner: Oh it's alright. It's not the kid's fault I lost my tinkering touch. Don't murder the boy. (He says jokingly)\nOf course, after the three of them sit down at one of his old coffe tables that he built himself, turning it into a table full of drafts and laid out tools with bearly anywhere to put a mug, Zeke goes looking and wanderring around, charmed by the old machinery and gadgets and tools surrounding him like a kid in a candy store. And jsut as any mischevious little brother would, he starts fiddling and playing with some of it, fortunately not casuing much complication due to half of the inventions either being turned off or so being inoperable that they acted just the same as if it were so. Howvever, there was one particular machine that caught his eye. One that had a little movement of little side metal pieces that almost seems the resemble the flapping of wings of some sort. So he started pressing diffrent buttons and playing with the lever, altering the flapp patterns and even how wide or narrow the wings swung out. Soon after he hit a button or two and started messing with the crank though, the invention started to malfunction and bring about smoke.\nZeke: Hey sir! I think your bird thingi is about to blow or something!\nCrystine: ZEEEEKKKKEEEE! I CAN'T BELIEVE YOU COULDN'T JUST STAY PUT FOR FIVE MUNUTES AND-\nTanner: It's alright it's alright. (He tries to calm everyone down) We do need to stop that thing though before something bad really does happen. All you have to do is press the exact buttons you did before and it'll shut it down kiddo! You got that?!\nZeke: Yeah, uh...-I wasn't really paying attention to that...\nCrstine: \"WASN'T PAYING ATTENTION TO THAT?!\" JUST LIKE YOU WEREN'T \"PAYING ATTENTION\" WHEN WE TOLD YOU TO KEEP YOUR STICKY FINGERS AWAY FROM THIS STUFF! (After the increasing thickness of the smoke reminded her that more fussing wasn't going to do them any good) DO YOU REMEMBER ANYTHING ABOUT WHAT YOU DID WITH THIS THING AT ALL?\nZeke: Well, I know that \"I know fore sure that I pushed more than one button\". \"I didn't push any two buttons right next to each other\". And, uhm...-One of the buttons I that I pressed was green.\nCrystine: That's it?!\nZeke: Yeah. I'm serious, ok?! Crystine: (Noticing the four buttons on the machine in this order: RED, YELLOW, GREEN, BLUE) Hm...-I'm sure there must be a logical way to think about this...There's four buttons over there, so sixteen possibilities for buttons pressed, including none of the four, or all four of them...At least eight of those possibilities couldn't work because they would all have buttons pressed next to each other. So...out of the eight options that are left, the only logical combination that would include GREEN getting pressed would be...");
    lSeven.setInstructions("Narrator: Help Crystine make an accurate inference based on Zeke's information to give him the right button combination. Please answer with the beginning letter (in order) of every button color (in all caps) and put an N in front of any color's letter that should NOT be pressed. For example: RYGB = Red and Yellow and Green and Blue should be pressed. NRNYNGNB = Red should not be pressed, Yellow should not be pressed, Green should not be pressed, and Blue should not be pressed.");
    lSeven.setAnswer("RNYGNB");

    Level lEight;
    lEight.setName("Level 8: The Last bit of Programming");
    lEight.setDialogue("\nCrystine: Press the red button, but not the yellow, and then press the green one, but not the blue one! Got it?!\nZeke: (Pressing every button very slowly with one index finger, being careful to follow every word.)\nNarrator: Finally the machine stops.\nTanner: Goodness. You kids figured it out didn't you. I can tell, you kids must have some good heads on your shoulders. Well now, since you kids figured out how to stop that bum thing, why don't I give you one better, huh? (He goes in a back room and fumbles around before finding some old glider wings he designed. Here you are kids. This right here, is a pair of glider wings. (Then he gives them a large can of oil) This thing, unlike that over there (referring to the deadbeat machine that Zeke was messing with), is one of the only few things that still works in this old shop You pour this in to give the motor enough juice to lify you. Since you kids are still pretty small, the large straps ought to ba able to fit both of you, and ought to be able to pick you right up! The only thing is though, I didn't have enough time to do the last little bit of programming on it. You see, in order to make a button for the wings to fly you up when it gets pressed, you need to make an algebraic expression out of Boolean logic for the case where you guys shut that other machine down. But I tested the physical side of it already. And hey, you kids are pretty sharp so, you guys ought to be able to figure something out. (He goes on to elaborate more on what he meant earlier when he said that the King's quarters was \"far\", but not \"in the longitudinal\" sense. He explains that the King's palace is on a hundreds of miles high mountain that is nearly inpossible to physically climb, and suggesting that his glider should help with the physical impracticality of getting them up there.)\nCrystine: Thank you for your gift and encouraging sentiments sir!\nZeke: Yeah. Sorry for messing up one of your old do-hickeys.\nTanner: Oh it's quite alright. It was nice to relieve the old memories of some of this old junk anyway. Had some good ideas in my time I suppose. But, now it's time for kids like you to make things for a better future. Narrator: After Tanner tries to show them the mountain he was reffering to on a map he gave them and tried to point out the mountain through a window from his shop, he sees the kids out.\nTanner: Hope you youngins have a safe trip now. Don't forget, the program fir the glider's fly-up button is the just the Boolean expression of the logic behind that machine you guys shut down before!\nCrystine: Okay! Thank you again sir! (She responds to him, holding up the oil for the motor)\nNarrator: Once Crystine and Zeke get to the base of the mountain, Zeke was especially exited to fly up!\nZeke: Well, pass me that oil and lets fill a birdy up!-\n:Crystine: Whoa! You need to chill bro. We haven't even programmed the equation yet for the fly button, remember?\nZeke: Oh yeah, that's right.\nCrystine: I guess we need to figure out how to logically make an equation for what you did with that Red, Yellow, Green, and Blue button (in that order) to start and stop that machine.\nZeke: Hm...Well it seems like we just need to \"AND\" together variables representing the \"pressed\" logic state of every button and negate two of the variables for the variables representing \"yellow\" and \"blue\". Hey, here's a screen that asks us to enter an expression. What do you think Crystine? Oh, and for some reason, the expression only takes OR opperators and negations. No AND opperators.");
    lEight.setInstructions("Narrator: Help Crystine find a Boolean algebraic expression to represent the buttons in the situation that shut down the machine, using \" (Expression)' \" to negate your entire expression to make OR operators between variables that really need to be AND-ed together. Please first type \"F =\" to say that the function of the machine equals, and then, type the rest of the expression. Use the variables R, Y, G, and B to represent the state of the Red, Yellow, Green, and Blue buttons, respectively and please type the variables for your equation in that order. Please also use the \"+\" sign to make an \"OR opperator\" between two variables and use a \" ' \" behind a variable for a negation, with NO spaces between each variable and opperator.\nFor example, supposing that the \"*\" in this case is an \"AND operator\", the expression: F=R*Y*G*B OR the acceptable negated (AND-less operator) answer F=(R'+Y'+G'+B')' means that the Red AND Yellow AND Green AND Blue buttons are pressed to turn the machine off. The expression F=R'*Y'*G'*B' OR the acceptable negated (AND-less operator) answer F=(R+Y+G+B)' means the RED AND Yellow AND Green AND Blue buttons are NOT pressed to turn the machine off.");
    lEight.setAnswer("F=(R'+Y+G'+B)'");

    ItemHouse lNine;
    lNine.setName("Item House!");
    lNine.setWorldPosition('l');
    lNine.setOptions("\nCrystine: Did it work? (She asks after telling her brother exactly what to type in for the programmed expression.)\nZeke: Yep! Let's fly.\nNarrator: After Crystine and Zeke filled up the glider wings and flew to the top of the mountain, where the King's palaces are.\nZeke: (Noticing a lot of minners going in and out of multiple caves as ants would go in and out of a mound.) What's all this for? (He asks his sister, looking around and pointing at some of the workers)\nCrystine: I don't know bro. I guess the king is looking for some valuable stuff. I don't know what though. Sometimes rich people just have hobbies.\nNarrator: After the two of them found a little shop with a sign that said: \"Fresh food for sale! Discounts for minors and minners!\" They decided to head over there to see what they had avalible. They quickly realized though, living in the King's quarters wasn't meant for people with humble beginnings, as they notice the inflation and pricieness of the land is something only those who live and work directly for the king (and get paid alot of money from him to do so) are the only ones who would actually live here on a day to day basis. So I guess Crystal and Zeke discover that there's other challenges besides just the geographical, that prevent most everyday commoners from visiting the King.\nWelcome to the item shop! (You may only purchase 1 item durring your visit)\nPlease press the \"a\" key to buy some Fruit (1 life) for three coins.\nPlease press the \"c\" key to buy a compass(1 Hint) for four coins.\nIf you do not want to make a purchase and would like to save your money, press the \"s\" key (WARNING: This is your last chance to buy items).");
    lNine.setLiveC(3);
    lNine.setHintsC(4);
    lNine.setLiveG(1);
    lNine.setHint("For the next Level: Remember that for making a valid inference from a complex conditional staement such as \"p -> q V r\" or \"if p then q OR r\", if you are to make this entire contitional statement a premise, and then make the neagtion of the conclusion of that conditional a second premise, which would be (NOT q AND NOT r) or NOT(q OR r) in this case, this leads to a valid conclusion of the hypothesis, which in this case is just p itself (or in other words, p must be true).");

    Level lTen;
    lTen.setName("Level 10: Ruby's Rubbie Mishap");
    lTen.setDialogue("\nNarrator: After Crystal and Zeke went to the gate and tried to ask the guard to let them pass to see the King, the guard informed them that they would have to pay the King 50 coins in order to pass! After Zeke made a comment about the King being greedy and almost got them put in jail and Crystal, like always, pleaded with the guard to just barely appease him enough to avoid their imprisonment, they decided to go into one of the caves that had a sign ouside that read: \"HELP WANTED! REWARD: A VALUABLE ITEM WORTH FIFTY COINS!\"\nCrystine: Hi sir. (She says to one of the miner workers.) Me and my brother were looking to see if we could try to earn the reward for the sign outside. Miner: Her office is over there. (He says grudgingly while pointing to a large crevice area with a bulb light and a boss sized desk and swivel chair.\nCrystine: Thanks!\nNarrator: Once Crystine and Zeke get to the office of the boss of this cave's dig site and explain their situation and what they noticed about the sign outside the cave entrance, she explains to them her delima.\nRuby: Oh yes! Hi! I was having major trouble trying to figure out where this highly valuable ruby was that our team lost track of. Prefferably, I was looking for someone with Gemology experience, but I guess you kids can give it a shot! Anyway, here's what I know. You ready?\nZeke: We were born ready! (He answers confidently for the both of them)\nRuby: Ok. This is what I know:\n1. If the miners started working early in the morning, then it was because we were behind schedule.\n2. We are not behind schedule and I did want us to get ahead.\n3. If the ruby we lost is not here \"in my office\", then I must have either stashed the ruby in \"next week's crate\" or \"Many has it\".\n4. If I did want us to get ahead, the ruby is not \"in my pocket\".\n5. We are behind schedlue and I didn't want us to get ahead if the ruby is \"in my office\".\n6. If \"Many has it\" (\"it\" being the ruby), then the miners started working early this morning.\nSo, do you guys think you can figure out where the ruby is?");
    lTen.setInstructions("Narrator: Using different argument forms of validity, make a conclusion and tell Ruby where the lost ruby is. Please type one of the three word phrases in quotes above in Ruby's recount for an answer. Please type that answer in all lower case, with NO spaces between each word and a capital letter for the second and thirds words in the phrase. Some examples of this could be \"underTheBed\" \"atTimmy'sHouse\" or \"onTheCounter\".");
    lTen.setAnswer("nextWeek'sCrate");
    
    if(Start_Message())
    {
            for(;;)
            {
                    while ((lives > 0) && !(GAME_COMPLETE))
                    {
                        executeWorld(&wOne, &lOne, &lTwo, &lThree);
                        executeWorld(&wTwo, &lFour, &lFive, &lSix);
                        executeWorld(&wThree, &lSeven, &lEight, &lNine);
                        executeWorld(&wThree, &lEight, &lNine, &lTen);
                    }

                    if (lives <= 0)
                    {
                        GAME_OVER_DEAD = true;
                    }
                    
                GAME_OVER(&lOne, &lTwo, &lThree, &lFour, &lFive, &lSix, &lSeven, &lEight, &lNine, &lTen);
            }
    }
    return 0;
}