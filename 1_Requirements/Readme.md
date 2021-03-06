# Requirements
## Introduction
**1.** An airline reservation system (ARS) is part of the passenger
      service systems (PSS), which are applications supporting the direct contact with
      the passenger.
  
**2.** ARS eventually evolved into the computer reservations system (CRS). A
       computer reservation system is used for the reservations of a particular airline and
       interfaces with a global distribution system (GDS) which supports travel agencies
       and other distribution channels in making reservations for most major airlines in a
       single system.
  
**3.** Earlier people have to visit airline company’s centers to
       book tickets and had to wait for hours in the queue. Or they have to book 
       tickets on phone, there also waiting for minutes to complete the booking process. 
       But now with just a few clicks, your ticket is booked. Travelers just have to enter 
       minimum information to book tickets. It’s so easy now to book flights!
            
**4.** This topic was chosen because it gives me an opportunity to enhance my C programming 
       understanding and apply SDLC concepts. 

### Benefits
ARS offer a range of benefits, here are just a few of them:

1.Easy to book tickets

2.Saves time and money

3.Send automated tickets to the customer by mail

4.Easy cancellation and Refund Policies

## Defining Our System Basic Requirements
1.Reservation of seat

2.Save record to file 

3.Display of records

4.Cancellation of records

5.Update Record

6.Exiting from the screen 

### Certain assumptions

1. Maximum number of seats booked in this system is 100 (We can expand whenever required)

2. System will take your passport number, your name, email address and destination for reservation

3. Analytic System is already present

4. ARS interfaces with a Global Distribution System (GDS)

5. Communication and other Services

 This project builds airline reservation system with certain features, other features can also be added
 for instance adding payement options, multi-lingual system, automatic communication, advanced reporting,
 mobile management and many more.
 
![BasicStructure](https://user-images.githubusercontent.com/67497698/114314276-a3d30200-9b17-11eb-9a0a-90187715fcd1.png)

## SWOT ANALYSIS

![SWOT](https://user-images.githubusercontent.com/67497698/114317471-e13e8c00-9b25-11eb-90ac-5aaa955280ff.png)

# 4W&#39;s and 1&#39;H

## Who
-:For small to large travel and ticket agencies. 

## What
-:Many travel and ticket agencies that are not able to afford high ARS Management Systems. 
Without log in page agencies can easily reserve or cancel their customers booking.

## When
-:In 1978, due to the economy and the emergence of new types of jets, government stopped controlling fares, prices, and routes, 
as well as market entry. That made the airline industry a free market new players could enter while existing carriers now could
set their own prices and establish new routes.Seeing the opportunities, airlines started to share CRSs with non-competing carriers,
opening access to multiple airline’s inventories via a single terminal. Carriers that participated in distribution through CRS had 
to pay a commission to be available through the platform. Those events in the market led to the emergence of a new term: 
Global Distribution System or GDS.Airlines now gained over 60 percent of bookings from travel and ticket agencies.

## Where
-:This system is present internationally.

## How
-: Without ARS customers had to wait in line for seat reservation. ARS has improved the management of seat reservation/cancellation and maintaining the records.Airline Reservation System shoots up the sales of an airline company and gives a competitive edge.One of the primary reason for choosing airline reservation system is to increase the number of bookings of the flight ticket.

# Detail requirements

## High Level Requirements
| ID | Description | Category |
| ----- | ----- | ------- | 
| HR01 | User shall be able to book their seats | Techincal | 
| HR02 | User shall be able to view all reservations | Techincal | 
| HR03 | User shall be able to cancel reservation  | Techincal |
| HR04 | User shall be able to produce new reservation and update | Techincal | 
| HR05 | User shall be able to save records and read from a file | Techincal |
| HR06 | User shall be able to easily exit from screen| Techincal | Technical |
| HR07 | User shall be able to easily book without log in page| Techincal | 

##  Low level Requirements
 
| ID | Description | Category | 
| ------ | --------- | ------ |
| LR01 | First page will display options 1,2,3,4 for reservation,cancellation,Display & exit respectively,any number or characters other than 1-4 are invalid |Techincal| 
| LR02 | Able to book with help of passport number,full name,email address, and destination | Techincal|
| LR03 | Their seat will be alloted by the system itself | Techincal|
| LR04 | Able to display record with all information given during reserving seat| Techincal | 
| LR05 | During cancellation only passport number is needed but it should be valid otherwise system will display invalid passport number| Techincal| 
| LR06 | System will save records to file and also able to cancel record if reservation is cancelled  | Techincal| 
| LR05 | Exit screen easily | Technical | 
| LR06 | After exiting, message is prompted that all records are saved | Techincal| 


