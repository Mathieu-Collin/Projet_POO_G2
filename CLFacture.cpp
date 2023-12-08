#include "CLFacture.h"

CLFacture::CLFacture(String^ nomFacture, int numeroServiceClient, String^ logo, float montantTotalHT, float montantTotalTTC, float montantTotalTVA, int remise)
{
    this->nomFacture = nomFacture;
    this->numeroServiceClient = numeroServiceClient;
    this->logo = logo;
    this->montantTotalHT = montantTotalHT;
    this->montantTotalTTC = montantTotalTTC;
    this->montantTotalTVA = montantTotalTVA;
    this->remise = remise;
}

// Implémentation des getters et setters
String^ CLFacture::GetNomFacture()
{
    return nomFacture;
}

void CLFacture::SetNomFacture(String^ nomFacture)
{
    this->nomFacture = nomFacture;
}

int CLFacture::GetNumeroServiceClient()
{
    return numeroServiceClient;
}

void CLFacture::SetNumeroServiceClient(int numeroServiceClient)
{
    this->numeroServiceClient = numeroServiceClient;
}

String^ CLFacture::GetLogo()
{
    return logo;
}

void CLFacture::SetLogo(String^ logo)
{
    this->logo = logo;
}

float CLFacture::GetMontantTotalHT()
{
    return montantTotalHT;
}

void CLFacture::SetMontantTotalHT(float montantTotalHT)
{
    this->montantTotalHT = montantTotalHT;
}

float CLFacture::GetMontantTotalTTC()
{
    return montantTotalTTC;
}

void CLFacture::SetMontantTotalTTC(float montantTotalTTC)
{
    this->montantTotalTTC = montantTotalTTC;
}

float CLFacture::GetMontantTotalTVA()
{
    return montantTotalTVA;
}

void CLFacture::SetMontantTotalTVA(float montantTotalTVA)
{
    this->montantTotalTVA = montantTotalTVA;
}

int CLFacture::GetRemise()
{
    return remise;
}

void CLFacture::SetRemise(int remise)
{
    this->remise = remise;
}
