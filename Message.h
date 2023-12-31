#pragma once
#include <string>
#include <iostream>

class Message
{
public:
    Message(const std::string& text, const std::string& sender, const std::string& receiver)
        :_text(text), _sender(sender), _receiver(receiver) {}

    friend std::ostream& operator <<(std::ostream& os, const Message& message_obj)
    {
        os << message_obj._text;
        os << '\t';
        os << message_obj._sender;
        os << '\t';
        os << message_obj._receiver;
        return os;
    }

private:
    std::string _text;
    std::string _sender;
    std::string _receiver;
};