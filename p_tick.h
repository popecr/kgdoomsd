#ifndef __P_TICK__
#define __P_TICK__


#ifdef __GNUG__
#pragma interface
#endif


// Called by C_Ticker,
// can call G_PlayerExited.
// Carries out all thinking of monsters and players.
void P_Ticker (void);



#endif

