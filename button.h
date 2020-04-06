#ifndef __BUTTON_H
#define __BUTTON_H




class Button
{
  public :
//    enum BUTTON_STATE {BUTTON_STABLE, BUTTON_UNSTABLE};
//    BUTTON_STATE state = BUTTON_STABLE;

    int buttonPin = 14;
    int lastBounceTime = 0;
    int debouncedPeriod = 20;
    Button(int pin, int db = 20);
    void Init(bool usePullup = true);
    bool CheckButtonPress(void);
 };




#endif
