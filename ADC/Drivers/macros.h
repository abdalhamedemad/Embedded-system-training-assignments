#ifndef MACROS_H_
#define MACROS_H_

#define SET_BIT(REGISTER,BIT) REGISTER|=(1<<BIT)
#define CLR_BIT(REGISTER,BIT) REGISTER&=~(1<<BIT)
#define TOG_BIT(REGISTER,BIT) REGISTER^=(1<<BIT)
#define GET_BIT(REGISTER,BIT) ((REGISTER>>BIT)&1)

#endif