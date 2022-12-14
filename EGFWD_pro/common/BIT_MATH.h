/*
 * BIT_MATH.h
 *
 * Created: 2/20/2022 10:08:24 PM
 *  Author: K.EMAM
 */ 
#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(VAR,BIT_NUM)    ( VAR |= (1<<BIT_NUM))
#define CLEAR_BIT(VAR,BIT_NUM)  ( VAR &= (~(1<<BIT_NUM))) 
#define TOGGLE_BIT(VAR,BIT_NUM) (VAR ^=(1<<BIT_NUM))
#define GET_BIT(VAR,BIT_NUM)    ((VAR>>BIT_NUM)&1)
#define GET_REG(BASE_ADDR, REG_TYPE, REG_OFFSET)                (*((volatile REG_TYPE*)(BASE_ADDR+REG_OFFSET)))



#endif /* BIT_MATH_H_ */