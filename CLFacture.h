#pragma once

using namespace System;

ref class CLFacture
{
private:
    String^ nomFacture;
    int numeroServiceClient;
    String^ logo;
    float montantTotalHT;
    float montantTotalTTC;
    float montantTotalTVA;
    int remise;

public:
    CLFacture(String^ nomFacture, int numeroServiceClient, String^ logo, float montantTotalHT, float montantTotalTTC, float montantTotalTVA, int remise);

    // Getter et Setter pour le nom de la facture
    String^ GetNomFacture();
    void SetNomFacture(String^ nomFacture);

    // Getter et Setter pour le numéro de service client
    int GetNumeroServiceClient();
    void SetNumeroServiceClient(int numeroServiceClient);

    // Getter et Setter pour le logo
    String^ GetLogo();
    void SetLogo(String^ logo);

    // Getter et Setter pour le montant total HT
    float GetMontantTotalHT();
    void SetMontantTotalHT(float montantTotalHT);

    // Getter et Setter pour le montant total TTC
    float GetMontantTotalTTC();
    void SetMontantTotalTTC(float montantTotalTTC);

    // Getter et Setter pour le montant total TVA
    float GetMontantTotalTVA();
    void SetMontantTotalTVA(float montantTotalTVA);

    // Getter et Setter pour la remise
    int GetRemise();
    void SetRemise(int
