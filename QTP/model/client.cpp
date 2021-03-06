#include "client.h"

Client::Client(int _id, QString _lastName, QString _firstName, QString _adress, QString _city, int _postalCode, QString _commentary, int _phoneNumber, QDate _appointmentDate, int _appointmentDuration, int _priority)
    :id(_id)
    , firstName(_firstName)
    ,lastName(_lastName)
    , adress(_adress)
    , city(_city)
    , postalCode(_postalCode)
    , appointmentDate(_appointmentDate)
    , appointmentDuration(_appointmentDuration)
    , priority(_priority)
    , commentary(_commentary)
    , phoneNumber(_phoneNumber)

{

}

Client::Client()
    :id(0)
    , firstName("")
    ,lastName("")
    , adress("")
    , city("")
    , postalCode(-1)
    , appointmentDate(QDate())
    , appointmentDuration(-1)
    , priority(-1)
    , commentary("")
    , phoneNumber(-1)
{

}
int Client::getId() const
{
    return id;
}

int Client::getAppointmentDuration() const
{
    return appointmentDuration;
}

int Client::getPriority() const
{
    return priority;
}

int Client::getPostalCode() const
{
    return postalCode;
}

int Client::getPhoneNumber() const
{
    return phoneNumber;
}

QString Client::getCommentary() const
{
    return commentary;
}

QString Client::getFirstName() const
{
    return firstName;
}

QString Client::getLastName() const
{
    return lastName;
}

QString Client::getAdress() const
{
    return adress;
}

QString Client::getCity() const
{
    return city;
}

QDate Client::getAppointmentDate() const
{
    return appointmentDate;
}
