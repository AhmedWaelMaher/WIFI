/*
 * avr_reg.h
 *
 *  Created on: Sep 20, 2019
 *      Author: abdelqader
 */

#ifndef AVR_REG_H_
#define AVR_REG_H_

/* Group A Registers */
#define PORTA  *((volatile uint8*)0x3B)
#define DDRA   *((volatile uint8*)0x3A)
#define PINA   *((volatile uint8*)0x39)

/* Group B Registers */
#define PORTB  *((volatile uint8*)0x38)
#define DDRB   *((volatile uint8*)0x37)
#define PINB   *((volatile uint8*)0x36)

/* Group C Registers */
#define PORTC *((volatile uint8*)0x35)
#define DDRC   *((volatile uint8*)0x34)
#define PINC  *((volatile uint8*)0x33)

/* Group D Registers */
#define PORTD *((volatile uint8*)0x32)
#define DDRD  *((volatile uint8*)0x31)
#define PIND  *((volatile uint8*)0x30)

/* SREG Register */
#define SREG  *((volatile uint8*)0x5F)


/* TIMER 0 AND TIMER 2 */
#define TCCR0	(* (volatile uint8 *) 0x53)
#define TCNT0	(* (volatile uint8 *) 0x52)
#define OCR0	(* (volatile uint8 *) 0x5C)
#define TIMSK	(* (volatile uint8 *) 0x59)
#define TIFR	(* (volatile uint8 *) 0x58)
#define	TCCR2	(* (volatile uint8 *) 0x45)
#define	TCNT2	(* (volatile uint8 *) 0x44)
#define	OCR2	(* (volatile uint8 *) 0x43)
#define	ASSR	(* (volatile uint8 *) 0x42)

/* TIMER 1 */
#define	TCCR1A	(* (volatile uint8 *) 0x4F)
#define	TCCR1B	(* (volatile uint8 *) 0x4E)
#define	TCNT1L	(* (volatile uint8 *) 0x4C)
#define	TCNT1H	(* (volatile uint8 *) 0x4D)
#define	OCR1AH	(* (volatile uint8 *) 0x4B)
#define	OCR1AL	(* (volatile uint8 *) 0x4A)
#define	OCR1BH	(* (volatile uint8 *) 0x49)
#define	OCR1BL	(* (volatile uint8 *) 0x48)
#define	ICR1H	(* (volatile uint8 *) 0x47)
#define	ICR1L	(* (volatile uint8 *) 0x46)



//ADDRESS OF GICR "GLOBAL INTERRUPT CONTROL REGISTER"
#define GICR_ADDRESS 0x5B
#define GICR (*(volatile uint8 *) GICR_ADDRESS)

//ADDRESS OF MCUCR "MCU CONTROL REGISTER"
#define MCUCR_ADDRESS 0x55
#define MCUCR (*(volatile uint8 *) MCUCR_ADDRESS)

//ADDRESS OF MCUCSR "MCU CONTROL SENSE REGISTER"
#define MCUCSR_ADDRESS 0x54
#define MCUCSR (*(volatile uint8 *) MCUCSR_ADDRESS)


/* UART MODULE */
#define	UDR		(*(volatile uint8 *) 0x2C)
#define	UCSRA	(*(volatile uint8 *) 0x2B)
#define	UCSRB	(*(volatile uint8 *) 0x2A)
#define	UCSRC	(*(volatile uint8 *) 0x40)
#define	UBRRL	(*(volatile uint8 *) 0x29)
#define	UBRRH	(*(volatile uint8 *) 0x40)

#define DDRA (*(( volatile uint8*)0x3A))
#define PINA (*(( volatile uint8*)0x39))
#define PORTA (*(( volatile uint8*)0x3B))


//registers addresses for port B
#define DDRB (*(( volatile uint8*)0x37))
#define PORTB (*((volatile uint8*)0x38))
#define PINB (*((volatile uint8*)0x36))


//registers addresses port C
#define DDRC (*((volatile uint8*)0x34))
#define PORTC (*((volatile uint8*)0x35))
#define PINC (*((volatile uint8*)0x33))


//registers addresses for port D
#define DDRD (*((volatile uint8*)0x31))
#define PORTD (*((volatile uint8*)0x32))
#define PIND (*((volatile uint8*)0x30))



/********************TIMERS REGISTERS*****************************/


//Timer control Register address for timer 1 channel A
#define TCCR1A (*(( volatile uint8*)0x4F))
#define TCCR1A_COM1A1 7
#define TCCR1A_COM1A0 6
#define TCCR1A_COM1B1 5
#define TCCR1A_COM1B0 4
#define TCCR1A_FOC1A  3
#define TCCR1A_FOC1B  2
#define TCCR1A_WGM11  1
#define TCCR1A_WGM10  0
//Timer control Register address for timer 1 channel B

#define TCCR1B (*(( volatile uint8*)0x4E))
#define TCCR1B_ICNC1 7
#define TCCR1B_ICES1 6
#define TCCR1B_WGM13 4
#define TCCR1B_WGM12 3
#define TCCR1B_CS12  2
#define TCCR1B_CS11  1
#define TCCR1B_CS10  0

//Timer1 registers address Timer/Counter1 � TCNT1H and TCNT1L

#define TCNT1L (*(( volatile uint16*)0x4C))

//Output Compare Register 1 A � OCR1AH and OCR1AL
#define OCR1AL (*(( volatile uint16*)0x4A))

//Output Compare Register 1 B� OCR1BH and OCR1BL
#define OCR1BL (*(( volatile uint16*)0x48))

//Input Capture Register 1 �ICR1H and ICR1L
#define ICR1L (*(( volatile uint16*)0x46))


//Timer control Register address for timer 0

#define TCCR0 (*(( volatile uint8*)0x53))
#define TCCR0_F0C0 7
#define TCCR0_WGM00 6
#define TCCR0_COM01 5
#define TCCR0_COM00 4
#define TCCR0_WGM01 3
#define TCCR0_CS02 2
#define TCCR0_CS01 1
#define TCCR0_CS00 0


//Timer registers address
#define TCNT0 (*(( volatile uint8*)0x52))


//Output Compare Register address
#define OCR0 (*(( volatile uint8*)0x5C))


//Timer/Counter Interrupt Mask Register � TIMSK
#define TIMSK (*(( volatile uint8*)0x59))
#define TIMSK_OCIE2 7
#define TIMSK_TOIE2 6
#define TIMSK_TICIE1 5
#define TIMSK_OCIE1A 4
#define TIMSK_OCIE1B 3
#define TIMSK_TOIE1 2
#define TIMSK_OCIE0 1
#define TIMSK_TOIE0 0


//Timer/Counter Interrupt Flag Register � TIFR
#define TIFR (*(( volatile uint8*)0x58))
#define TIFR_OCF2 7
#define TIFR_TOV2 6
#define TIFR_ICF1 5
#define TIFR_OCF1A 4
#define TIFR_OCF1B 3
#define TIFR_TOV1 2
#define TIFR_OCF0 1
#define TIFR_TOV0 0



//Timer control Register address for timer 2

#define TCCR2 (*(( volatile uint8*)0x45))
#define TCCR2_F0C2 7
#define TCCR2_WGM20 6
#define TCCR2_COM21 5
#define TCCR2_COM20 4
#define TCCR2_WGM21 3
#define TCCR2_CS22 2
#define TCCR2_CS21 1
#define TCCR2_CS20 0

#define ASSR (*(( volatile uint8*)0x42))
#define ASSR_AS2 3
#define ASSR_TCN2UB 2
#define ASSR_OCR2UB 1
#define ASSR_TCR2UB 0

//Timer registers address
#define TCNT2 (*(( volatile uint8*)0x44))


//Output Compare Register address
#define OCR2 (*(( volatile uint8*)0x43))


//register address for SREG Status Register
#define SREG (*((volatile uint8*)0x5F))
//to enable the Global Interrupt Flag pin
#define SREG_I 7


//ADDRESS OF GICR "GLOBAL INTERRUPT CONTROL REGISTER"
#define GICR_ADDRESS 0x5B
#define GICR (*(volatile uint8 *) GICR_ADDRESS)
#define GIFR_ADDRESS 0x5A
#define GIFR  (*(volatile uint8 *) GIFR_ADDRESS)

//ADDRESS OF MCUCR "MCU CONTROL REGISTER"
#define MCUCR_ADDRESS 0x55
#define MCUCR (*(volatile uint8 *) MCUCR_ADDRESS)

//ADDRESS OF MCUCSR "MCU CONTROL SENSE REGISTER"
#define MCUCSR_ADDRESS 0x54
#define MCUCSR (*(volatile uint8 *) MCUCSR_ADDRESS)


#define NULL (void *)0

#endif /* AVR_REG_H_ */