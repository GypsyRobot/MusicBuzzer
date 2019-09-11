#ifndef MusicBuzzer_h
#define MusicBuzzer_h
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define debug true


class MusicBuzzerClass
{
public:

void init(int buzzerPin);
void initBuzzer(int buzzerPin);

void asabranca();
void babyelephantwalk();
void bloodytears();
void brahmslullaby();
void cannonind();
void cantinaband();
void doom();
void furelise();
void gameofthrones();
void greenhill();
void greensleeves();
void happybirthday();
void harrypotter();
void imperialmarch();
void jigglypuffsong();
void keyboardcat();
void merrychristmas();
void miichannel();
void minuetg();
void nevergonnagiveyouup();
void odetojoy();
void pinkpanther();
void princeigor();
void professorlayton();
void pulodagaita();
void silentnight();
void songofstorms();
void startrekintro();
void starwars();
void supermariobros();
void takeonme();
void tetris();
void thegodfather();
void thelick();
void thelionsleepstonight();
void vampirekiller();
void zeldaslullaby();
void zeldatheme();

private:
int buzzerPin;
};

extern MusicBuzzerClass music;

#endif
