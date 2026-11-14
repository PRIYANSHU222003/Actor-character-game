#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

struct Actor {
    string name;
    vector<string> characteristics;
};

int main() {
    map<string, Actor> actors = {
        {"salman khan", {
            "Salman Khan",
            {
                "Charismatic and confident",
                "Strong action-hero image",
                "Good comic timing",
                "Known for romantic roles",
                "Famous for Chulbul Pandey"
            }
        }},

        {"shah rukh khan", {
            "Shah Rukh Khan",
            {
                "Known as the King of Romance",
                "Emotional and expressive acting",
                "Excellent screen presence",
                "Energetic dancer",
                "Famous for Raj and Rahul"
            }
        }},
         {"emran hashmi", {
            "Emran Hashmi",
            {
                "Known as the King of Kisses",
                "Emotional and expressive acting",
                "Excellent screen presence",
                "Energetic dancer",
                "Famous for muder and razz "
            }
        }},
        {"amitabh bachchan", {
        "Amitabh Bachchan",
        {
            "Known as the Shahenshah of Bollywood",
            "Deep and powerful voice",
            "Commanding screen presence",
            "Excellent dialogue delivery",
            "Famous for Vijay and Jai"
        }
    }},
    {"hrithik roshan", {
        "Hrithik Roshan",
        {
            "Known for exceptional dancing skills",
            "Athletic physique and stylish appearance",
            "Expressive eyes and emotional acting",
            "Skilled in action sequences",
            "Famous for Rohit and Kabir"
        }
    }},
     {"akshay kumar", {
        "Akshay Kumar",
        {
            "Known for action and comedy films",
            "Disciplined and energetic screen presence",
            "Skilled in martial arts",
            "Performs physically demanding roles",
            "Famous for Raju and Hawaldar Bhagwan"
        }
    }},
    {"ajay devgn", {
        "Ajay Devgn",
        {
            "Known for intense performances",
            "Serious and controlled acting style",
            "Strong action screen presence",
            "Effective in dramatic roles",
            "Famous for Bajirao Singham and Vijay Salgaonkar"
        }
    }},
    {"ranveer singh", {
        "Ranveer Singh",
        {
            "Known for energetic performances",
            "Expressive facial expressions",
            "Versatile character transformations",
            "Powerful dancing skills",
            "Famous for Bajirao and Murad"
        }
    }},

        {"aamir khan", {
            "Aamir Khan",
            {
                "Known for realistic performances",
                "Very selective about films",
                "Transforms himself for roles",
                "Strong emotional acting",
                "Famous for 3 Idiots, Lagaan and Dangal"
            }
        }},

        {"ranveer singh", {
            "Ranveer Singh",
            {
                "Extremely energetic",
                "Highly expressive",
                "Very versatile",
                "Known for intense performances",
                "Famous for Gully Boy and Padmaavat"
            }
        }},
        {"tom cruise", {
        "Tom Cruise",
        {
            "Known for performing many of his own stunts",
            "Energetic action performances",
            "Confident screen presence",
            "Famous for the Mission: Impossible franchise",
            "Famous for Ethan Hunt and Maverick"
        }
    }},
     {"brad pitt", {
        "Brad Pitt",
        {
            "Known for charismatic screen presence",
            "Versatile dramatic and comedic acting",
            "Distinctive screen persona",
            "Strong performances in character-driven films",
            "Famous for Tyler Durden and Achilles"
        }
    }},
     {"robert downey jr", {
        "Robert Downey Jr.",
        {
            "Known for witty dialogue delivery",
            "Charismatic and expressive acting",
            "Excellent comic timing",
            "Famous for superhero and detective roles",
            "Famous for Tony Stark and Sherlock Holmes"
        }
    }},
    {"dwayne johnson", {
        "Dwayne Johnson",
        {
            "Known for action and adventure films",
            "Muscular physique and powerful presence",
            "Energetic comedic performances",
            "Former professional wrestling star",
            "Famous for Luke Hobbs and Maui"
        }
    }},
    {"jackie chan", {
        "Jackie Chan",
        {
            "Known for combining action and comedy",
            "Exceptional martial arts choreography",
            "Performs elaborate physical stunts",
            "Creative use of everyday objects in action",
            "Famous for Inspector Lee and Chan Ka-kui"
        }
    }},

        {"aishwarya rai", {
            "Aishwarya Rai",
            {
                "Elegant and graceful",
                "Strong screen presence",
                "Expressive acting",
                "Known for emotional roles",
                "Former Miss World"
            }
        }},

        {"sushmita sen", {
            "Sushmita Sen",
            {
                "Confident and elegant",
                "Strong personality",
                "Often plays independent characters",
                "Powerful screen presence",
                "Former Miss Universe"
            }
        }},
        {"rani mukerji", {
        "Rani Mukerji",
        {
            "Known for powerful dramatic performances",
            "Distinctive and expressive voice",
            "Strong emotional acting",
            "Convincing in serious roles",
            "Famous for Michelle McNally and Shivani Shivaji Roy"
        }
    }},
    {"kajol", {
        "Kajol",
        {
            "Known for expressive acting",
            "Energetic and natural performances",
            "Excellent emotional range",
            "Memorable romantic roles",
            "Famous for Anjali and Simran"
        }
    }},
    {"alia bhatt", {
        "Alia Bhatt",
        {
            "Known for versatile acting",
            "Expressive emotional performances",
            "Natural dialogue delivery",
            "Transforms convincingly for roles",
            "Famous for Gangubai and Safeena"
        }
    }},
    {"deepika padukone", {
        "Deepika Padukone",
        {
            "Known for graceful screen presence",
            "Expressive and emotional acting",
            "Excellent dance performances",
            "Strong dramatic performances",
            "Famous for Piku and Mastani"
        }
    }},
      {"katrina kaif", {
        "Katrina Kaif",
        {
            "Known for dance performances",
            "Glamorous screen presence",
            "Strong physical performance in action films",
            "Energetic musical numbers",
            "Famous for Zoya and Laila"
        }
    }},
     {"scarlett johansson", {
        "Scarlett Johansson",
        {
            "Known for versatile dramatic performances",
            "Strong action screen presence",
            "Distinctive voice",
            "Effective emotional expression",
            "Famous for Black Widow and Charlotte"
        }
    }},
    {"emma watson", {
        "Emma Watson",
        {
            "Known for intelligent and composed characters",
            "Clear dialogue delivery",
            "Strong screen presence in fantasy films",
            "Recognized for literary and dramatic roles",
            "Famous for Hermione Granger and Belle"
        }
    }},
    {"angelina jolie", {
        "Angelina Jolie",
        {
            "Known for powerful screen presence",
            "Strong performances in action films",
            "Expressive and intense acting",
            "Recognizable dramatic style",
            "Famous for Lara Croft and Maleficent"
        }
    }},

        {"priyanka chopra", {
            "Priyanka Chopra",
            {
                "Versatile actress",
                "Confident and expressive",
                "Strong emotional range",
                "Known for powerful characters",
                "Successful internationally"
            }
        }},

        {"tamannaah bhatia", {
            "Tamannaah Bhatia",
            {
                "Elegant and glamorous",
                "Expressive performer",
                "Strong dancing skills",
                "Versatile across languages",
                "Known for Baahubali and Jailer"
            }
        }},

        {"prabhas", {
            "Prabhas",
            {
                "Powerful screen presence",
                "Known for action roles",
                "Calm and intense acting style",
                "Often plays heroic characters",
                "Famous for Baahubali and Salaar"
            }
        }},

        {"robert downey jr", {
            "Robert Downey Jr.",
            {
                "Charismatic and witty",
                "Excellent comic timing",
                "Expressive acting",
                "Confident screen presence",
                "Famous for Tony Stark / Iron Man"
            }
        }},

        {"chris evans", {
            "Chris Evans",
            {
                "Strong and disciplined characters",
                "Natural screen presence",
                "Known for heroic roles",
                "Good emotional range",
                "Famous for Steve Rogers / Captain America"
            }
        }}
    };

    cout << "====================================\n";
    cout << "       ACTOR CHARACTERISTICS GAME\n";
    cout << "====================================\n";

    string actorName;

    while (true) {
        cout << "\nEnter actor name (or type 'exit' to quit): ";
        getline(cin, actorName);

        // Convert input to lowercase
        for (char &c : actorName) {
            c = tolower(c);
        }

        if (actorName == "exit") {
            cout << "\nThanks for playing! 🎬\n";
            break;
        }

        auto it = actors.find(actorName);

        if (it != actors.end()) {
            cout << "\n🎭 " << it->second.name << "\n";
            cout << "----------------------------\n";

            for (const string &characteristic : it->second.characteristics) {
                cout << "• " << characteristic << "\n";
            }
        }
        else {
            cout << "\n❌ Actor not found in the database.\n";
            cout << "Try another actor!\n";
        }
    }

    return 0;
}