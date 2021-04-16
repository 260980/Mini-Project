# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Performing Arithmetic Operations| Giving Different test values |SUCCESS|SUCCESS|Requirement based/Scenario based/Boundary based |
|  H_02       |Performing Scientific Operations|  Giving Different test values |SUCEESS |SUCCESS|Requirement based/Scenario based/Boundary based |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Performing Addition Operation | (30,20)|50|50|Requirement based |
|  L_02       |Performing Addition Operation | (15*20,-5*20)|900|900|Scenario based    |
|  L_03       |Performing Addition Operation|  (99999,88888)|188887|188887|Boundary based    |
|  L_04       |Performing Subtraction Operation | (30,20)|10|10|Requirement based |
|  L_05       |Performing Subtraction Operation | (10*20,-5*60)|500|500|Scenario based    |
|  L_06       |Performing Subtraction Operation|  (99999,-11111)|111110|111110|Boundary based    |
|  L_07       |Performing Multiplication Operation | (20,30)|600|600|Requirement based |
|  L_08       |Performing Multiplication Operation | (-20+50,-15+400)|11550|11550|Scenario based    |
|  L_09       |Performing Multiplication Operation|  (999,-888)|-887112|-887112|Boundary based    |
|  L_10       |Performing Division Operation | (159,3)|53|53|Requirement based |
|  L_11       |Performing Division Operation | (1,0)|ERROR_DIV_ZERO|ERROR_DIV_ZERO|Scenario based    |
|  L_12       |Performing Division Operation|  (888888,2)|444444|444444|Boundary based    |
|  L_13       |Performing Power Operation | (24,3)|13824|13824|Requirement based |
|  L_14       |Performing Power Operation|  (222,3)|10941048|10941048|Boundary based    |
|  L_15       |Performing Square root Operation | 576|24|24|Requirement based |
|  L_16       |Performing Square root Operation | 576*625|600|600|Scenario based    |
|  L_17       |Performing Square root Operation|  1234321|1111|1111|Boundary based    |
