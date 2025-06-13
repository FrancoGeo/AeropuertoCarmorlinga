CREATE SCHEMA IF NOT EXISTS tickets;
USE tickets;

CREATE TABLE tickets (
    id INT AUTO_INCREMENT PRIMARY KEY,
    inicio VARCHAR(100),
    destino VARCHAR(100),
    fechaAbordaje DATE,
    horaAbordaje TIME,
    horaLlegada TIME,
    reservacion VARCHAR(50),
    bookingNumber INT,
    vuelo VARCHAR(50),
    asiento VARCHAR(10),
    operador VARCHAR(100),
    cliente VARCHAR(100)
);

CREATE TABLE usuarios (
    id INT AUTO_INCREMENT PRIMARY KEY,
    email VARCHAR(255),
    password VARCHAR(255)
);
