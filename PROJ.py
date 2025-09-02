import random
import requests

passengers = []

def add_passenger():
    first_name = input("Enter first name: ")
    last_name = input("Enter last name: ")
    email = input("Enter email: ")
    phone = input("Enter phone number: ")
    booking_id = str(random.randint(1000000000, 9999999999))

    print('Your Booking ID is:', booking_id)


    passenger = {
        "booking_id": booking_id,
        "first_name": first_name,
        "last_name": last_name,
        "email": email,
        "phone": phone
    }
    passengers.append(passenger)

    print("Passenger added successfully!")
    return booking_id


API_KEY = '826b5e67cbe4ccf709ed42730c45192d'
BASE_URL = 'http://api.aviationstack.com/v1/flights'

def get_real_time_flights(source_airport, destination_airport):
    params = {
        'access_key': API_KEY,
        'dep_iata': source_airport,
        'arr_iata': destination_airport
    }

    response = requests.get(BASE_URL, params=params)

    if response.status_code == 200:
        flights = response.json().get('data', [])
        if flights:
            for flight in flights:
                print(f"Flight Number: {flight['flight']['iata']}")
                print(f"Departure: {flight['departure']['airport']} at {flight['departure']['scheduled']}")
                print(f"Arrival: {flight['arrival']['airport']} at {flight['arrival']['scheduled']}")
                print(f"Status: {flight['flight_status']}")
                print("-" * 20)
        else:
            print("No flights found.")
    else:
        print(f"Error fetching data: {response.status_code}")

def search_real_time_flights(source, destination):
    print(f"Searching for real-time flights from {source} to {destination}...")
    get_real_time_flights(source, destination)


print('******************************************')
print('Hi!!!!')

booking_id = add_passenger()

print('Check flight status')
takeoff = input('Starting airport (IATA code): ')
arrival = input('Destination airport (IATA code): ')
search_real_time_flights(takeoff, arrival)
