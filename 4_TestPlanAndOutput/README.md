# TEST PLAN and Corresponding Output
## High Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of test |
| -------:|:-----------:|:-------:|:-------:|:----------:|:------------:|
| H_01 | Check if the welcoming page is displayed properly | Program execution | Formatted Welcoming Page | Formatted Welcome Page |Requirement |
| H_02 | Check if the menu is displayed properly | Login Credentials | Formatted Menu Page | Formatted Menu Page | Requirement |
| H_03 | Not stuck inside any function | Function call | Proper function execution with return type and message | Proper function execution with return type and message | Requirement |

## Low Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
| -------:|:-----------:|:-------:|:-------:|:----------:|:------------:|
| L_01 | Verify player credentials | Player Name | Success->Menu; Failure->exit | Success->Menu; Failure->exit | Scenario |
| L_02 | Scoring Entry | name of the individual | Name present->score; Name absent->not found | Name present ->score; Name absent ->not found | Technical |
| L_03 | Modify Entry | name of the individual | Name present->modify; Name absent->not found | Name present->modify; Name absent->not found | Technical |