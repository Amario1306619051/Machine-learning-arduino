#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[3] <= 97.5) {
                            if (x[4] <= 15.0) {
                                if (x[2] <= 87.5) {
                                    if (x[3] <= 92.5) {
                                        if (x[1] <= 26.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[0] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 24.5) {
                                                    if (x[1] <= 28.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 30.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            if (x[1] <= 31.5) {
                                                if (x[0] <= 23.5) {
                                                    if (x[0] <= 22.5) {
                                                        if (x[2] <= 67.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 62.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 62.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 62.5) {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 25.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 32.5) {
                                                        if (x[0] <= 24.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                if (x[1] <= 27.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 21.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 25.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 82.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[1] <= 32.5) {
                                                            if (x[2] <= 77.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 77.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 30.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 92.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[2] <= 92.5) {
                                                if (x[1] <= 24.5) {
                                                    if (x[0] <= 21.5) {
                                                        if (x[0] <= 20.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 25.5) {
                                                        if (x[0] <= 22.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 92.5) {
                                                if (x[0] <= 24.5) {
                                                    if (x[1] <= 27.5) {
                                                        if (x[0] <= 23.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 25.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 67.5) {
                                    if (x[1] <= 31.5) {
                                        if (x[0] <= 22.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 92.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            if (x[2] <= 77.5) {
                                                if (x[1] <= 30.5) {
                                                    if (x[0] <= 22.5) {
                                                        if (x[0] <= 21.5) {
                                                            if (x[0] <= 20.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 25.5) {
                                                if (x[1] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 22.5) {
                                if (x[1] <= 24.5) {
                                    if (x[2] <= 92.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 23.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 92.5) {
                                        if (x[2] <= 67.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 21.5) {
                                                if (x[1] <= 27.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 25.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 15.0) {
                                    if (x[1] <= 27.5) {
                                        if (x[0] <= 23.5) {
                                            if (x[2] <= 92.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[1] <= 26.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        if (x[1] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 87.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 26.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            if (x[0] <= 23.5) {
                                                if (x[1] <= 31.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    if (x[1] <= 30.5) {
                                                        if (x[1] <= 29.5) {
                                                            if (x[1] <= 28.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 77.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 62.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 67.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 72.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 67.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 23.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[0] <= 23.5) {
                            if (x[2] <= 72.5) {
                                if (x[2] <= 67.5) {
                                    if (x[0] <= 21.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[3] <= 97.5) {
                                            if (x[1] <= 30.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[2] <= 62.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 29.5) {
                                        if (x[1] <= 28.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                if (x[0] <= 20.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 30.5) {
                                            if (x[0] <= 22.5) {
                                                if (x[0] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 27.5) {
                                    if (x[0] <= 20.5) {
                                        if (x[2] <= 87.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[3] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 22.5) {
                                                            if (x[1] <= 25.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        if (x[0] <= 21.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[2] <= 92.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 24.5) {
                                                    if (x[2] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 23.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[0] <= 21.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[0] <= 22.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 77.5) {
                                        if (x[0] <= 22.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 31.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 97.5) {
                                            if (x[2] <= 82.5) {
                                                if (x[0] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 82.5) {
                                                if (x[1] <= 30.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 15.0) {
                                if (x[3] <= 97.5) {
                                    if (x[1] <= 32.5) {
                                        if (x[0] <= 24.5) {
                                            if (x[1] <= 31.5) {
                                                if (x[2] <= 62.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        if (x[2] <= 77.5) {
                                                            if (x[2] <= 70.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 27.5) {
                                                            if (x[2] <= 92.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 82.5) {
                                                    if (x[2] <= 72.5) {
                                                        if (x[2] <= 62.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 26.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 62.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 30.0) {
                                                        if (x[1] <= 27.5) {
                                                            if (x[0] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 75.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 24.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 25.5) {
                                                if (x[2] <= 67.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 29.5) {
                                        if (x[1] <= 28.5) {
                                            if (x[2] <= 82.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    if (x[1] <= 26.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 30.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 31.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 62.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 67.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 72.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 62.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[3] <= 92.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            if (x[1] <= 29.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 24.5) {
                                                    if (x[2] <= 67.5) {
                                                        if (x[1] <= 31.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                if (x[0] <= 25.5) {
                                                    if (x[1] <= 29.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[0] <= 22.5) {
                            if (x[2] <= 67.5) {
                                if (x[4] <= 15.0) {
                                    if (x[0] <= 21.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 97.5) {
                                    if (x[1] <= 25.5) {
                                        if (x[0] <= 20.5) {
                                            if (x[2] <= 87.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[2] <= 82.5) {
                                                if (x[1] <= 27.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 29.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 28.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    if (x[1] <= 29.5) {
                                                        if (x[0] <= 20.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 24.5) {
                                        if (x[0] <= 21.5) {
                                            if (x[1] <= 23.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 21.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 97.5) {
                                if (x[3] <= 92.5) {
                                    if (x[1] <= 32.5) {
                                        if (x[2] <= 67.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 24.5) {
                                                if (x[1] <= 27.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 28.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[0] <= 25.5) {
                                                        if (x[4] <= 15.0) {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 25.5) {
                                        if (x[2] <= 87.5) {
                                            if (x[0] <= 23.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 92.5) {
                                                if (x[1] <= 24.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            if (x[1] <= 31.5) {
                                                if (x[0] <= 23.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                if (x[0] <= 24.5) {
                                                    if (x[4] <= 15.0) {
                                                        if (x[0] <= 23.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 31.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 31.5) {
                                                            if (x[0] <= 23.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    if (x[0] <= 23.5) {
                                                        if (x[1] <= 30.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 15.0) {
                                                            if (x[0] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        if (x[0] <= 24.5) {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 15.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 15.0) {
                                                            if (x[0] <= 23.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 82.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 26.5) {
                                    if (x[0] <= 23.5) {
                                        if (x[1] <= 25.5) {
                                            if (x[2] <= 87.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 92.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 62.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 31.5) {
                                            if (x[2] <= 82.5) {
                                                if (x[0] <= 23.5) {
                                                    if (x[2] <= 72.5) {
                                                        if (x[2] <= 67.5) {
                                                            if (x[4] <= 15.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 30.5) {
                                                        if (x[1] <= 29.5) {
                                                            if (x[1] <= 28.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 77.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[0] <= 23.5) {
                                                        if (x[1] <= 27.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 15.0) {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 77.5) {
                                                if (x[2] <= 72.5) {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[2] <= 72.5) {
                            if (x[3] <= 97.5) {
                                if (x[1] <= 31.5) {
                                    if (x[1] <= 30.5) {
                                        if (x[2] <= 67.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 28.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    if (x[1] <= 29.5) {
                                                        if (x[0] <= 20.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 22.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            if (x[0] <= 22.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 23.5) {
                                                    if (x[2] <= 62.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 15.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        if (x[2] <= 62.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 25.5) {
                                        if (x[3] <= 92.5) {
                                            if (x[4] <= 15.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 32.5) {
                                                    if (x[2] <= 62.5) {
                                                        if (x[0] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 22.0) {
                                    if (x[1] <= 29.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 15.0) {
                                        if (x[2] <= 62.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 97.5) {
                                if (x[1] <= 29.5) {
                                    if (x[2] <= 82.5) {
                                        if (x[0] <= 23.5) {
                                            if (x[1] <= 28.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 77.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 28.5) {
                                                    if (x[4] <= 15.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 23.5) {
                                            if (x[1] <= 28.0) {
                                                if (x[1] <= 25.5) {
                                                    if (x[2] <= 92.5) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[0] <= 21.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            if (x[0] <= 22.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 92.5) {
                                                if (x[0] <= 25.5) {
                                                    if (x[0] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 26.5) {
                                                        if (x[0] <= 24.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 27.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 25.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 27.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 82.5) {
                                        if (x[2] <= 77.5) {
                                            if (x[0] <= 25.5) {
                                                if (x[1] <= 31.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 31.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 31.5) {
                                    if (x[2] <= 82.5) {
                                        if (x[2] <= 77.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[1] <= 28.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[1] <= 27.5) {
                                                if (x[0] <= 22.5) {
                                                    if (x[2] <= 92.5) {
                                                        if (x[0] <= 21.5) {
                                                            if (x[1] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[1] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        if (x[2] <= 92.5) {
                                                            if (x[0] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 23.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 23.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 23.5) {
                                        if (x[2] <= 77.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[3] <= 97.5) {
                            if (x[2] <= 92.5) {
                                if (x[1] <= 23.5) {
                                    if (x[2] <= 87.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 29.5) {
                                        if (x[0] <= 23.5) {
                                            if (x[1] <= 28.5) {
                                                if (x[1] <= 27.5) {
                                                    if (x[0] <= 22.5) {
                                                        if (x[2] <= 82.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 21.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[2] <= 82.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 20.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    if (x[4] <= 15.0) {
                                                        if (x[0] <= 24.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 82.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        if (x[4] <= 15.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[4] <= 15.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 31.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[0] <= 22.5) {
                                                    if (x[2] <= 67.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 70.0) {
                                                        if (x[2] <= 62.5) {
                                                            if (x[0] <= 23.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    if (x[1] <= 30.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 72.5) {
                                                        if (x[2] <= 67.5) {
                                                            if (x[0] <= 23.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 30.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 80.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 24.5) {
                                                if (x[2] <= 72.5) {
                                                    if (x[4] <= 15.0) {
                                                        if (x[2] <= 62.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 32.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 70.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 72.5) {
                                                        if (x[2] <= 62.5) {
                                                            if (x[1] <= 32.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 67.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 32.5) {
                                                            if (x[0] <= 25.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 77.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 25.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 23.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 31.5) {
                                if (x[1] <= 28.5) {
                                    if (x[2] <= 82.5) {
                                        if (x[0] <= 23.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 22.5) {
                                            if (x[1] <= 24.5) {
                                                if (x[1] <= 23.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                if (x[1] <= 25.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        if (x[2] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 27.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 67.5) {
                                        if (x[1] <= 30.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                if (x[4] <= 15.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 30.5) {
                                            if (x[0] <= 23.5) {
                                                if (x[2] <= 72.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 29.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 72.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 23.5) {
                                    if (x[2] <= 77.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 62.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 72.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[0] <= 22.5) {
                            if (x[3] <= 97.5) {
                                if (x[2] <= 67.5) {
                                    if (x[1] <= 30.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        if (x[0] <= 20.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 28.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 75.0) {
                                            if (x[4] <= 15.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[1] <= 25.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 82.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 24.5) {
                                    if (x[2] <= 92.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 23.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 29.5) {
                                        if (x[2] <= 87.5) {
                                            if (x[2] <= 75.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 82.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 92.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 97.5) {
                                if (x[3] <= 92.5) {
                                    if (x[2] <= 87.5) {
                                        if (x[1] <= 26.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 28.5) {
                                                    if (x[1] <= 27.5) {
                                                        if (x[0] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 70.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 23.5) {
                                        if (x[4] <= 15.0) {
                                            if (x[2] <= 62.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[2] <= 92.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 30.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[0] <= 24.5) {
                                                if (x[1] <= 30.5) {
                                                    if (x[1] <= 29.5) {
                                                        if (x[2] <= 92.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 62.5) {
                                                        if (x[1] <= 31.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 82.5) {
                                                            if (x[2] <= 72.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    if (x[1] <= 30.0) {
                                                        if (x[0] <= 25.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 25.5) {
                                                            if (x[2] <= 75.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[2] <= 77.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 31.5) {
                                                if (x[0] <= 24.5) {
                                                    if (x[1] <= 29.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 67.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 29.0) {
                                                        if (x[0] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 30.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 62.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[0] <= 23.5) {
                                        if (x[4] <= 15.0) {
                                            if (x[2] <= 92.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[2] <= 82.5) {
                                                        if (x[2] <= 77.5) {
                                                            if (x[1] <= 31.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 30.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 25.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 31.5) {
                                            if (x[1] <= 30.5) {
                                                if (x[2] <= 82.5) {
                                                    if (x[2] <= 77.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 29.5) {
                                                            if (x[1] <= 28.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 72.5) {
                                                if (x[2] <= 67.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[3] <= 97.5) {
                            if (x[0] <= 23.5) {
                                if (x[4] <= 15.0) {
                                    if (x[3] <= 92.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 75.0) {
                                            if (x[0] <= 22.5) {
                                                if (x[2] <= 67.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 62.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[1] <= 24.5) {
                                                    if (x[1] <= 23.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 21.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[2] <= 82.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 28.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 82.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 30.5) {
                                        if (x[0] <= 20.5) {
                                            if (x[1] <= 28.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 21.5) {
                                                if (x[1] <= 29.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            if (x[0] <= 22.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 15.0) {
                                    if (x[1] <= 25.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[0] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[0] <= 24.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[3] <= 92.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    if (x[2] <= 80.0) {
                                                        if (x[1] <= 31.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        if (x[1] <= 31.5) {
                                                            if (x[1] <= 30.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 32.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 28.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 30.5) {
                                        if (x[0] <= 25.5) {
                                            if (x[2] <= 82.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 80.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 92.5) {
                                            if (x[2] <= 70.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                if (x[1] <= 31.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 24.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 28.5) {
                                if (x[0] <= 22.5) {
                                    if (x[1] <= 24.5) {
                                        if (x[1] <= 23.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 21.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 25.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 92.5) {
                                                if (x[0] <= 21.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 15.0) {
                                        if (x[0] <= 23.5) {
                                            if (x[2] <= 82.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        if (x[1] <= 26.5) {
                                                            if (x[2] <= 92.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 82.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[1] <= 27.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 22.0) {
                                    if (x[1] <= 29.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 31.5) {
                                        if (x[4] <= 15.0) {
                                            if (x[1] <= 30.5) {
                                                if (x[1] <= 29.5) {
                                                    if (x[0] <= 23.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 77.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 23.5) {
                                            if (x[2] <= 77.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 62.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 72.5) {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[3] <= 97.5) {
                            if (x[2] <= 62.5) {
                                if (x[0] <= 25.5) {
                                    if (x[1] <= 31.5) {
                                        if (x[0] <= 23.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 92.5) {
                                            if (x[4] <= 15.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 15.0) {
                                    if (x[1] <= 24.5) {
                                        if (x[2] <= 87.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                if (x[1] <= 23.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                if (x[1] <= 29.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 27.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    if (x[0] <= 23.5) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        if (x[1] <= 31.5) {
                                                            if (x[0] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 32.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 92.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 24.5) {
                                        if (x[0] <= 21.5) {
                                            if (x[0] <= 20.5) {
                                                if (x[1] <= 28.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 29.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 23.5) {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 30.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 29.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 31.5) {
                                                            if (x[2] <= 67.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 77.5) {
                                            if (x[1] <= 31.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 82.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[0] <= 25.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 27.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 23.5) {
                                if (x[1] <= 28.5) {
                                    if (x[2] <= 82.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            if (x[2] <= 92.5) {
                                                if (x[1] <= 25.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 92.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[0] <= 22.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 26.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        if (x[1] <= 25.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 24.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 22.0) {
                                        if (x[1] <= 29.5) {
                                            if (x[2] <= 72.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[1] <= 31.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 62.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= 87.5) {
                                        if (x[2] <= 82.5) {
                                            if (x[1] <= 31.5) {
                                                if (x[1] <= 30.5) {
                                                    if (x[2] <= 77.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 29.5) {
                                                            if (x[1] <= 28.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 72.5) {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[4] <= 15.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[0] <= 23.5) {
                            if (x[4] <= 15.0) {
                                if (x[3] <= 97.5) {
                                    if (x[1] <= 29.5) {
                                        if (x[0] <= 20.5) {
                                            if (x[2] <= 87.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 92.5) {
                                                if (x[0] <= 21.5) {
                                                    if (x[2] <= 85.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[1] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 30.5) {
                                                if (x[2] <= 67.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 24.5) {
                                        if (x[0] <= 21.5) {
                                            if (x[2] <= 92.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                if (x[1] <= 27.5) {
                                                    if (x[0] <= 21.5) {
                                                        if (x[1] <= 25.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 92.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 82.5) {
                                                    if (x[2] <= 77.5) {
                                                        if (x[1] <= 31.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 30.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 25.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 97.5) {
                                    if (x[1] <= 28.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            if (x[0] <= 22.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 20.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 22.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 30.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 30.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 28.5) {
                                if (x[3] <= 97.5) {
                                    if (x[2] <= 92.5) {
                                        if (x[4] <= 15.0) {
                                            if (x[1] <= 27.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[0] <= 24.5) {
                                                        if (x[1] <= 26.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 92.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[0] <= 25.5) {
                                                        if (x[0] <= 24.5) {
                                                            if (x[2] <= 82.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 92.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 92.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 24.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 26.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 97.5) {
                                    if (x[3] <= 92.5) {
                                        if (x[2] <= 77.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 31.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 24.5) {
                                            if (x[2] <= 82.5) {
                                                if (x[1] <= 31.5) {
                                                    if (x[4] <= 15.0) {
                                                        if (x[1] <= 30.5) {
                                                            if (x[1] <= 29.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 62.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 67.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        if (x[2] <= 72.5) {
                                                            if (x[1] <= 32.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[0] <= 25.5) {
                                                    if (x[2] <= 62.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 77.5) {
                                                            if (x[1] <= 32.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 32.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 32.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 72.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 80.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 62.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 77.5) {
                                                if (x[2] <= 72.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[0] <= 23.5) {
                            if (x[2] <= 72.5) {
                                if (x[2] <= 67.5) {
                                    if (x[3] <= 97.5) {
                                        if (x[1] <= 30.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 62.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 22.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 22.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 28.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[3] <= 97.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                if (x[1] <= 30.5) {
                                                    if (x[1] <= 29.5) {
                                                        if (x[0] <= 20.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 21.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 27.5) {
                                    if (x[0] <= 22.5) {
                                        if (x[1] <= 24.5) {
                                            if (x[0] <= 20.5) {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 23.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        if (x[3] <= 97.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 97.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 82.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 25.5) {
                                                        if (x[3] <= 97.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[2] <= 87.5) {
                                                if (x[1] <= 25.5) {
                                                    if (x[3] <= 97.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    if (x[2] <= 92.5) {
                                                        if (x[1] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 25.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 87.5) {
                                                if (x[3] <= 97.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 22.5) {
                                            if (x[2] <= 82.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 31.5) {
                                                if (x[1] <= 28.5) {
                                                    if (x[3] <= 97.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 82.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 97.5) {
                                if (x[2] <= 67.5) {
                                    if (x[2] <= 62.5) {
                                        if (x[1] <= 31.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 92.5) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    if (x[0] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 31.5) {
                                                if (x[4] <= 15.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 24.5) {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 25.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 92.5) {
                                            if (x[2] <= 87.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 28.5) {
                                                        if (x[0] <= 25.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 24.5) {
                                                if (x[2] <= 92.5) {
                                                    if (x[4] <= 15.0) {
                                                        if (x[2] <= 82.5) {
                                                            if (x[2] <= 77.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 29.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    if (x[1] <= 26.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 77.5) {
                                                            if (x[1] <= 32.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 15.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        if (x[1] <= 30.0) {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 80.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 67.5) {
                                    if (x[1] <= 31.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 82.5) {
                                        if (x[2] <= 77.5) {
                                            if (x[1] <= 31.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 72.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 29.5) {
                                                if (x[1] <= 28.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 27.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 26.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #11
                        if (x[1] <= 30.5) {
                            if (x[2] <= 67.5) {
                                if (x[0] <= 21.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 15.0) {
                                    if (x[2] <= 82.5) {
                                        if (x[0] <= 23.5) {
                                            if (x[2] <= 72.5) {
                                                if (x[1] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 28.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 77.5) {
                                                if (x[1] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 97.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[1] <= 28.5) {
                                                        if (x[3] <= 97.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 97.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 87.5) {
                                            if (x[0] <= 22.5) {
                                                if (x[3] <= 97.5) {
                                                    if (x[0] <= 21.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 27.5) {
                                                            if (x[1] <= 25.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    if (x[0] <= 23.5) {
                                                        if (x[3] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 92.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 92.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                if (x[1] <= 24.5) {
                                                    if (x[3] <= 97.5) {
                                                        if (x[1] <= 23.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 21.5) {
                                                            if (x[1] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 97.5) {
                                                        if (x[1] <= 25.5) {
                                                            if (x[0] <= 22.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 92.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[0] <= 22.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 92.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    if (x[1] <= 27.5) {
                                                        if (x[2] <= 92.5) {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 25.5) {
                                                            if (x[0] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 27.5) {
                                        if (x[0] <= 25.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            if (x[1] <= 29.5) {
                                                if (x[3] <= 97.5) {
                                                    if (x[1] <= 28.5) {
                                                        if (x[0] <= 22.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 20.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    if (x[0] <= 21.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 25.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 31.5) {
                                if (x[3] <= 97.5) {
                                    if (x[0] <= 22.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 77.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[2] <= 62.5) {
                                                    if (x[0] <= 23.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 23.5) {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 23.5) {
                                        if (x[4] <= 15.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 82.5) {
                                    if (x[2] <= 62.5) {
                                        if (x[3] <= 97.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 32.5) {
                                                    if (x[0] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 23.5) {
                                            if (x[2] <= 77.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 72.5) {
                                                if (x[0] <= 24.5) {
                                                    if (x[2] <= 67.5) {
                                                        if (x[3] <= 97.5) {
                                                            if (x[4] <= 15.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 25.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #12
                        if (x[0] <= 22.5) {
                            if (x[3] <= 97.5) {
                                if (x[0] <= 20.5) {
                                    if (x[2] <= 87.5) {
                                        if (x[4] <= 15.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 28.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 67.5) {
                                        if (x[0] <= 21.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[1] <= 29.5) {
                                                if (x[1] <= 24.5) {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        if (x[2] <= 82.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 82.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 29.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 24.5) {
                                    if (x[2] <= 92.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 15.0) {
                                        if (x[2] <= 67.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    if (x[1] <= 27.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[2] <= 82.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 97.5) {
                                if (x[1] <= 30.5) {
                                    if (x[1] <= 28.5) {
                                        if (x[3] <= 92.5) {
                                            if (x[0] <= 24.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    if (x[2] <= 87.5) {
                                                        if (x[1] <= 27.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                if (x[2] <= 92.5) {
                                                    if (x[0] <= 23.5) {
                                                        if (x[1] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 23.5) {
                                                    if (x[1] <= 27.5) {
                                                        if (x[1] <= 26.5) {
                                                            if (x[2] <= 90.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[4] <= 15.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[2] <= 82.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 25.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 23.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 92.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 25.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 62.5) {
                                        if (x[4] <= 15.0) {
                                            if (x[0] <= 25.5) {
                                                if (x[3] <= 92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        if (x[0] <= 23.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 31.5) {
                                                    if (x[0] <= 23.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    if (x[0] <= 23.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    if (x[3] <= 92.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 31.5) {
                                                            if (x[0] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 15.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 23.5) {
                                    if (x[1] <= 26.5) {
                                        if (x[1] <= 25.5) {
                                            if (x[2] <= 87.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 92.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 92.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 31.5) {
                                            if (x[2] <= 82.5) {
                                                if (x[4] <= 15.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[1] <= 27.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 77.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 67.5) {
                                        if (x[2] <= 62.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 31.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[2] <= 87.5) {
                                                if (x[1] <= 27.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 72.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 29.5) {
                                                            if (x[2] <= 82.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 77.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 26.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #13
                        if (x[0] <= 23.5) {
                            if (x[1] <= 30.5) {
                                if (x[2] <= 67.5) {
                                    if (x[4] <= 15.0) {
                                        if (x[3] <= 97.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 97.5) {
                                        if (x[2] <= 75.0) {
                                            if (x[4] <= 15.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    if (x[1] <= 28.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 29.5) {
                                                            if (x[0] <= 20.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 21.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[1] <= 26.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 92.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            if (x[2] <= 72.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                if (x[2] <= 92.5) {
                                                    if (x[1] <= 25.5) {
                                                        if (x[0] <= 21.5) {
                                                            if (x[1] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 21.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[1] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[1] <= 27.5) {
                                                        if (x[1] <= 26.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[1] <= 26.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 22.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 31.5) {
                                        if (x[4] <= 15.0) {
                                            if (x[3] <= 97.5) {
                                                if (x[2] <= 62.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                if (x[2] <= 67.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 77.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 97.5) {
                                if (x[3] <= 92.5) {
                                    if (x[4] <= 15.0) {
                                        if (x[2] <= 80.0) {
                                            if (x[1] <= 31.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[0] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 70.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 82.5) {
                                        if (x[0] <= 24.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[2] <= 70.0) {
                                                    if (x[1] <= 31.5) {
                                                        if (x[2] <= 62.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 62.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 32.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 30.5) {
                                                            if (x[1] <= 28.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 75.0) {
                                                    if (x[1] <= 31.5) {
                                                        if (x[2] <= 67.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 31.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[0] <= 25.5) {
                                                        if (x[1] <= 32.5) {
                                                            if (x[2] <= 62.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 77.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[0] <= 25.5) {
                                                if (x[2] <= 92.5) {
                                                    if (x[2] <= 87.5) {
                                                        if (x[1] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[1] <= 30.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 29.5) {
                                                if (x[0] <= 25.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 67.5) {
                                    if (x[1] <= 31.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 31.0) {
                                        if (x[2] <= 82.5) {
                                            if (x[2] <= 77.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[1] <= 28.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 26.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[4] <= 15.0) {
                                                        if (x[1] <= 27.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #14
                        if (x[1] <= 31.5) {
                            if (x[0] <= 23.5) {
                                if (x[2] <= 67.5) {
                                    if (x[0] <= 21.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[3] <= 97.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 97.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 15.0) {
                                        if (x[0] <= 21.5) {
                                            if (x[2] <= 82.5) {
                                                if (x[1] <= 27.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 23.5) {
                                                    if (x[0] <= 20.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 97.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                if (x[2] <= 75.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        if (x[2] <= 82.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 82.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 28.5) {
                                                    if (x[0] <= 22.5) {
                                                        if (x[2] <= 92.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 80.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            if (x[1] <= 29.5) {
                                                if (x[1] <= 28.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 20.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 22.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 30.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 25.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 82.5) {
                                        if (x[0] <= 25.0) {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 28.5) {
                                                    if (x[3] <= 97.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        if (x[2] <= 70.0) {
                                                            if (x[2] <= 62.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 29.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 97.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 29.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 75.0) {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 87.5) {
                                            if (x[0] <= 24.5) {
                                                if (x[3] <= 92.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        if (x[3] <= 97.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    if (x[3] <= 92.5) {
                                                        if (x[0] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 25.5) {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 29.5) {
                                                            if (x[4] <= 15.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[1] <= 26.5) {
                                                    if (x[3] <= 97.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        if (x[2] <= 92.5) {
                                                            if (x[3] <= 97.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[0] <= 24.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 72.5) {
                                if (x[0] <= 25.5) {
                                    if (x[0] <= 24.5) {
                                        if (x[2] <= 67.5) {
                                            if (x[2] <= 62.5) {
                                                if (x[3] <= 97.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    if (x[3] <= 97.5) {
                                                        if (x[4] <= 15.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[2] <= 62.5) {
                                                if (x[3] <= 92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 92.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 97.5) {
                                    if (x[0] <= 24.5) {
                                        if (x[2] <= 82.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 25.5) {
                                            if (x[1] <= 32.5) {
                                                if (x[4] <= 15.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 77.5) {
                                        if (x[0] <= 23.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #15
                        if (x[1] <= 31.5) {
                            if (x[0] <= 23.5) {
                                if (x[2] <= 72.5) {
                                    if (x[1] <= 28.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 97.5) {
                                            if (x[0] <= 21.5) {
                                                if (x[1] <= 30.5) {
                                                    if (x[1] <= 29.5) {
                                                        if (x[0] <= 20.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 30.5) {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 22.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 67.5) {
                                                        if (x[2] <= 62.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 15.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 22.0) {
                                                if (x[1] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    if (x[4] <= 15.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 82.5) {
                                        if (x[2] <= 77.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                if (x[0] <= 21.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 97.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 97.5) {
                                            if (x[2] <= 92.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[0] <= 22.5) {
                                                        if (x[1] <= 27.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 24.5) {
                                                        if (x[0] <= 20.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 21.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.0) {
                                                            if (x[0] <= 22.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 24.5) {
                                                if (x[2] <= 92.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        if (x[1] <= 26.5) {
                                                            if (x[2] <= 92.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 24.5) {
                                    if (x[3] <= 97.5) {
                                        if (x[1] <= 26.5) {
                                            if (x[1] <= 25.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 27.5) {
                                                    if (x[2] <= 92.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 28.5) {
                                                        if (x[3] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 30.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 75.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[1] <= 30.5) {
                                                if (x[1] <= 27.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 28.5) {
                                                        if (x[2] <= 82.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 29.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 77.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 87.5) {
                                        if (x[1] <= 30.5) {
                                            if (x[0] <= 25.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 27.5) {
                                                        if (x[1] <= 26.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 92.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 92.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[3] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 29.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 92.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 92.5) {
                                if (x[4] <= 15.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 70.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 15.0) {
                                    if (x[1] <= 32.5) {
                                        if (x[0] <= 24.5) {
                                            if (x[0] <= 23.5) {
                                                if (x[2] <= 77.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 62.5) {
                                                    if (x[3] <= 97.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 97.5) {
                                                        if (x[2] <= 82.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 72.5) {
                                                            if (x[2] <= 67.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 75.0) {
                                                if (x[2] <= 62.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 25.5) {
                                            if (x[0] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 67.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #16
                        if (x[3] <= 97.5) {
                            if (x[0] <= 23.5) {
                                if (x[2] <= 67.5) {
                                    if (x[2] <= 62.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 30.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 22.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 29.5) {
                                        if (x[0] <= 20.5) {
                                            if (x[1] <= 28.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[2] <= 87.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 92.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 82.5) {
                                                    if (x[4] <= 15.0) {
                                                        if (x[1] <= 28.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 28.0) {
                                                        if (x[2] <= 92.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 25.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 30.5) {
                                                if (x[4] <= 15.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 27.5) {
                                    if (x[4] <= 15.0) {
                                        if (x[2] <= 87.5) {
                                            if (x[1] <= 26.5) {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    if (x[0] <= 25.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 92.5) {
                                                if (x[1] <= 26.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 24.5) {
                                        if (x[3] <= 92.5) {
                                            if (x[1] <= 28.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 30.5) {
                                                        if (x[2] <= 82.5) {
                                                            if (x[1] <= 28.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 62.5) {
                                                            if (x[1] <= 31.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 31.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 75.0) {
                                                        if (x[1] <= 31.5) {
                                                            if (x[2] <= 67.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[0] <= 25.5) {
                                                if (x[3] <= 92.5) {
                                                    if (x[1] <= 30.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 30.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 82.5) {
                                                            if (x[1] <= 32.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 30.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 32.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 31.5) {
                                                if (x[2] <= 80.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 29.5) {
                                                        if (x[0] <= 25.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 65.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 75.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 24.5) {
                                if (x[2] <= 92.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 23.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 15.0) {
                                    if (x[2] <= 67.5) {
                                        if (x[2] <= 62.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            if (x[1] <= 30.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 82.5) {
                                                if (x[1] <= 29.5) {
                                                    if (x[0] <= 23.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 28.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        if (x[0] <= 23.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 77.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 23.5) {
                                                            if (x[2] <= 77.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 26.5) {
                                                    if (x[2] <= 92.5) {
                                                        if (x[0] <= 23.5) {
                                                            if (x[0] <= 22.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[0] <= 22.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        if (x[1] <= 27.5) {
                                                            if (x[0] <= 23.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 23.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 80.0) {
                                        if (x[1] <= 30.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[1] <= 26.5) {
                            if (x[0] <= 23.5) {
                                if (x[2] <= 82.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= 87.5) {
                                        if (x[0] <= 21.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 92.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    if (x[1] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 97.5) {
                                                        if (x[0] <= 22.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 97.5) {
                                            if (x[2] <= 92.5) {
                                                if (x[1] <= 24.5) {
                                                    if (x[0] <= 20.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 21.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 24.5) {
                                                if (x[0] <= 21.5) {
                                                    if (x[1] <= 23.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    if (x[0] <= 21.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 25.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[1] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 87.5) {
                                    if (x[1] <= 25.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 97.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 21.5) {
                                if (x[2] <= 67.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[3] <= 97.5) {
                                        if (x[0] <= 20.5) {
                                            if (x[1] <= 28.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 29.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 82.5) {
                                    if (x[3] <= 97.5) {
                                        if (x[0] <= 25.5) {
                                            if (x[0] <= 22.5) {
                                                if (x[2] <= 67.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 29.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 15.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    if (x[0] <= 23.5) {
                                                        if (x[2] <= 62.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 15.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 29.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 92.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 28.5) {
                                                        if (x[0] <= 23.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 15.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 30.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 31.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[2] <= 77.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 29.5) {
                                                        if (x[0] <= 23.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 28.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                if (x[2] <= 77.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 62.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 72.5) {
                                                        if (x[2] <= 67.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 92.5) {
                                        if (x[0] <= 24.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 22.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                if (x[0] <= 23.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        if (x[0] <= 25.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 27.5) {
                                                            if (x[2] <= 92.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[0] <= 23.5) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 27.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[4] <= 15.0) {
                            if (x[0] <= 23.5) {
                                if (x[1] <= 24.5) {
                                    if (x[0] <= 21.5) {
                                        if (x[3] <= 97.5) {
                                            if (x[1] <= 23.5) {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 92.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 22.5) {
                                            if (x[3] <= 97.5) {
                                                if (x[2] <= 87.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 97.5) {
                                        if (x[2] <= 75.0) {
                                            if (x[2] <= 62.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[0] <= 21.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 82.5) {
                                                    if (x[1] <= 28.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 22.5) {
                                            if (x[1] <= 25.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        if (x[1] <= 27.5) {
                                                            if (x[2] <= 82.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 26.5) {
                                                if (x[1] <= 25.5) {
                                                    if (x[2] <= 92.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 27.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 82.5) {
                                    if (x[0] <= 25.5) {
                                        if (x[3] <= 97.5) {
                                            if (x[3] <= 92.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[1] <= 28.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        if (x[1] <= 30.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 62.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            if (x[2] <= 62.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 32.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 31.5) {
                                                if (x[2] <= 77.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 28.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 29.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 62.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 72.5) {
                                                        if (x[2] <= 67.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 87.5) {
                                        if (x[3] <= 92.5) {
                                            if (x[0] <= 24.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    if (x[0] <= 25.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[1] <= 25.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        if (x[3] <= 97.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 30.0) {
                                                    if (x[0] <= 25.5) {
                                                        if (x[3] <= 97.5) {
                                                            if (x[0] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[0] <= 24.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 25.5) {
                                            if (x[3] <= 97.5) {
                                                if (x[0] <= 24.5) {
                                                    if (x[2] <= 92.5) {
                                                        if (x[1] <= 27.5) {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 97.5) {
                                if (x[3] <= 92.5) {
                                    if (x[2] <= 70.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 23.5) {
                                        if (x[1] <= 30.5) {
                                            if (x[1] <= 29.5) {
                                                if (x[1] <= 28.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 20.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                if (x[0] <= 22.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 77.5) {
                                            if (x[0] <= 25.5) {
                                                if (x[2] <= 67.5) {
                                                    if (x[1] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 22.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[0] <= 23.5) {
                                        if (x[2] <= 67.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #19
                        if (x[0] <= 23.5) {
                            if (x[3] <= 97.5) {
                                if (x[1] <= 29.5) {
                                    if (x[4] <= 15.0) {
                                        if (x[1] <= 27.5) {
                                            if (x[2] <= 82.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    if (x[0] <= 21.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 20.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[0] <= 22.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        if (x[3] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 28.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 82.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 28.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 15.0) {
                                        if (x[1] <= 30.5) {
                                            if (x[2] <= 67.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 62.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 30.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                if (x[0] <= 22.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 15.0) {
                                    if (x[2] <= 82.5) {
                                        if (x[2] <= 67.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 21.5) {
                                                if (x[1] <= 27.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 22.5) {
                                            if (x[2] <= 92.5) {
                                                if (x[0] <= 21.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 24.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 26.5) {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 25.5) {
                                                        if (x[2] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[1] <= 27.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 30.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 82.5) {
                                if (x[3] <= 97.5) {
                                    if (x[4] <= 15.0) {
                                        if (x[0] <= 25.5) {
                                            if (x[0] <= 24.5) {
                                                if (x[3] <= 92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 32.5) {
                                                        if (x[2] <= 70.0) {
                                                            if (x[1] <= 31.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 31.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    if (x[3] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 62.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 70.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                if (x[1] <= 31.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    if (x[1] <= 31.5) {
                                                        if (x[2] <= 72.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 31.5) {
                                        if (x[2] <= 72.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 29.5) {
                                                if (x[1] <= 28.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 72.5) {
                                                if (x[2] <= 67.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 97.5) {
                                    if (x[3] <= 92.5) {
                                        if (x[0] <= 25.5) {
                                            if (x[2] <= 87.5) {
                                                if (x[1] <= 27.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[0] <= 24.5) {
                                                if (x[1] <= 30.0) {
                                                    if (x[2] <= 87.5) {
                                                        if (x[1] <= 26.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 26.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 30.0) {
                                                        if (x[1] <= 27.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 25.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[0] <= 25.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 26.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 87.5) {
                                            if (x[1] <= 27.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[0] <= 23.5) {
                            if (x[3] <= 97.5) {
                                if (x[1] <= 26.5) {
                                    if (x[0] <= 20.5) {
                                        if (x[2] <= 87.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[1] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[0] <= 22.5) {
                                                            if (x[0] <= 21.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 90.0) {
                                                        if (x[0] <= 22.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 15.0) {
                                        if (x[0] <= 22.5) {
                                            if (x[2] <= 82.5) {
                                                if (x[1] <= 29.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 67.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 62.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[2] <= 72.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 82.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            if (x[0] <= 22.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 28.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[0] <= 20.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 30.5) {
                                                        if (x[0] <= 21.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 24.5) {
                                    if (x[2] <= 92.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        if (x[4] <= 15.0) {
                                            if (x[2] <= 82.5) {
                                                if (x[1] <= 29.5) {
                                                    if (x[2] <= 75.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 92.5) {
                                            if (x[1] <= 31.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 28.5) {
                                                        if (x[1] <= 26.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 82.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                if (x[1] <= 25.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 62.5) {
                                if (x[3] <= 97.5) {
                                    if (x[4] <= 15.0) {
                                        if (x[0] <= 25.5) {
                                            if (x[0] <= 24.5) {
                                                if (x[1] <= 31.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 72.5) {
                                    if (x[3] <= 97.5) {
                                        if (x[0] <= 24.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 31.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    if (x[1] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            if (x[1] <= 31.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 92.5) {
                                        if (x[1] <= 29.5) {
                                            if (x[3] <= 97.5) {
                                                if (x[0] <= 25.5) {
                                                    if (x[1] <= 26.5) {
                                                        if (x[0] <= 24.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            if (x[1] <= 28.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 15.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        if (x[3] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[4] <= 15.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 82.5) {
                                                    if (x[1] <= 28.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 77.5) {
                                                if (x[1] <= 31.0) {
                                                    if (x[3] <= 97.5) {
                                                        if (x[4] <= 15.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 97.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    if (x[0] <= 25.5) {
                                                        if (x[3] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 32.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #21
                        if (x[0] <= 22.5) {
                            if (x[3] <= 97.5) {
                                if (x[2] <= 67.5) {
                                    if (x[0] <= 21.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 23.5) {
                                        if (x[2] <= 87.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 29.5) {
                                            if (x[2] <= 75.0) {
                                                if (x[1] <= 28.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 20.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 24.5) {
                                                            if (x[0] <= 21.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 82.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 24.5) {
                                    if (x[1] <= 23.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 25.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[2] <= 82.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 92.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 72.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 82.5) {
                                if (x[3] <= 97.5) {
                                    if (x[2] <= 72.5) {
                                        if (x[4] <= 15.0) {
                                            if (x[0] <= 25.5) {
                                                if (x[2] <= 62.5) {
                                                    if (x[1] <= 31.5) {
                                                        if (x[0] <= 23.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 92.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        if (x[0] <= 23.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 62.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    if (x[0] <= 23.5) {
                                                        if (x[2] <= 67.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 30.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 67.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 67.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[1] <= 28.5) {
                                                if (x[0] <= 23.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        if (x[1] <= 31.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            if (x[1] <= 30.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 92.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 25.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 31.5) {
                                        if (x[2] <= 77.5) {
                                            if (x[4] <= 15.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 28.5) {
                                                if (x[0] <= 23.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 23.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 29.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                if (x[2] <= 77.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 72.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 26.5) {
                                    if (x[1] <= 25.5) {
                                        if (x[0] <= 23.5) {
                                            if (x[2] <= 87.5) {
                                                if (x[3] <= 97.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 92.5) {
                                                    if (x[1] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 97.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 97.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 23.5) {
                                            if (x[2] <= 92.5) {
                                                if (x[3] <= 97.5) {
                                                    if (x[3] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                if (x[0] <= 24.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 31.5) {
                                        if (x[2] <= 87.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 27.5) {
                                                    if (x[3] <= 97.5) {
                                                        if (x[3] <= 92.5) {
                                                            if (x[0] <= 25.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 23.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[0] <= 23.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    if (x[0] <= 25.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[1] <= 29.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                if (x[3] <= 97.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    if (x[2] <= 92.5) {
                                                        if (x[1] <= 27.5) {
                                                            if (x[0] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 92.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 25.5) {
                                            if (x[0] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #22
                        if (x[3] <= 97.5) {
                            if (x[0] <= 22.5) {
                                if (x[0] <= 20.5) {
                                    if (x[2] <= 77.5) {
                                        if (x[1] <= 28.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 87.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 30.5) {
                                        if (x[1] <= 29.5) {
                                            if (x[2] <= 82.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 27.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 24.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[2] <= 67.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 92.5) {
                                    if (x[0] <= 23.5) {
                                        if (x[2] <= 62.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 92.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 75.0) {
                                                    if (x[2] <= 67.5) {
                                                        if (x[4] <= 15.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 30.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        if (x[1] <= 25.5) {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[3] <= 92.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[0] <= 25.5) {
                                                        if (x[2] <= 80.0) {
                                                            if (x[1] <= 31.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 24.5) {
                                                    if (x[1] <= 32.5) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 31.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[2] <= 62.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 82.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 32.5) {
                                                            if (x[1] <= 30.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 77.5) {
                                                if (x[3] <= 92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        if (x[2] <= 67.5) {
                                                            if (x[1] <= 31.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    if (x[2] <= 82.5) {
                                                        if (x[1] <= 30.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 29.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 23.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 67.5) {
                                if (x[1] <= 30.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 31.5) {
                                        if (x[4] <= 15.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 31.5) {
                                    if (x[2] <= 82.5) {
                                        if (x[1] <= 28.5) {
                                            if (x[1] <= 27.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                if (x[2] <= 72.5) {
                                                    if (x[0] <= 22.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 22.5) {
                                            if (x[1] <= 24.5) {
                                                if (x[0] <= 21.5) {
                                                    if (x[2] <= 92.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[0] <= 21.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 25.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[0] <= 23.5) {
                                                    if (x[2] <= 92.5) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 26.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        if (x[1] <= 27.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 23.5) {
                                        if (x[2] <= 77.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #23
                        if (x[2] <= 82.5) {
                            if (x[0] <= 21.5) {
                                if (x[1] <= 29.5) {
                                    if (x[0] <= 20.5) {
                                        if (x[1] <= 28.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[1] <= 27.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 15.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 72.5) {
                                    if (x[3] <= 97.5) {
                                        if (x[0] <= 24.5) {
                                            if (x[2] <= 67.5) {
                                                if (x[1] <= 30.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        if (x[2] <= 62.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 15.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 15.0) {
                                                            if (x[1] <= 32.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 31.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 30.5) {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 22.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[2] <= 62.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[0] <= 23.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 62.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 23.5) {
                                        if (x[0] <= 22.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 29.5) {
                                            if (x[2] <= 77.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    if (x[1] <= 28.5) {
                                                        if (x[4] <= 15.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 28.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[0] <= 24.5) {
                                                    if (x[1] <= 31.0) {
                                                        if (x[2] <= 77.5) {
                                                            if (x[3] <= 97.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 77.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 26.5) {
                                if (x[3] <= 97.5) {
                                    if (x[2] <= 92.5) {
                                        if (x[2] <= 87.5) {
                                            if (x[3] <= 92.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 23.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[0] <= 23.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 24.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                if (x[0] <= 21.5) {
                                                    if (x[1] <= 23.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 24.5) {
                                                        if (x[0] <= 22.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 22.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 25.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 92.5) {
                                        if (x[0] <= 21.5) {
                                            if (x[1] <= 24.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                if (x[0] <= 22.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        if (x[0] <= 22.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 23.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 24.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 97.5) {
                                    if (x[1] <= 27.5) {
                                        if (x[2] <= 92.5) {
                                            if (x[0] <= 24.5) {
                                                if (x[0] <= 23.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    if (x[0] <= 25.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 87.5) {
                                            if (x[3] <= 92.5) {
                                                if (x[0] <= 24.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    if (x[0] <= 25.5) {
                                                        if (x[1] <= 29.5) {
                                                            if (x[4] <= 15.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 15.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 15.0) {
                                        if (x[0] <= 23.5) {
                                            if (x[1] <= 27.5) {
                                                if (x[2] <= 87.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #24
                        if (x[3] <= 97.5) {
                            if (x[1] <= 28.5) {
                                if (x[2] <= 82.5) {
                                    if (x[4] <= 15.0) {
                                        if (x[1] <= 27.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 75.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 87.5) {
                                        if (x[3] <= 92.5) {
                                            if (x[0] <= 23.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    if (x[0] <= 25.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[0] <= 24.5) {
                                                        if (x[0] <= 23.5) {
                                                            if (x[0] <= 22.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    if (x[4] <= 15.0) {
                                                        if (x[0] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 92.5) {
                                            if (x[0] <= 24.5) {
                                                if (x[0] <= 23.5) {
                                                    if (x[0] <= 22.0) {
                                                        if (x[0] <= 20.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.0) {
                                                            if (x[1] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        if (x[1] <= 26.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 25.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 26.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 92.5) {
                                    if (x[4] <= 15.0) {
                                        if (x[0] <= 24.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 70.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 22.5) {
                                        if (x[2] <= 75.0) {
                                            if (x[0] <= 21.5) {
                                                if (x[0] <= 20.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 30.5) {
                                                        if (x[1] <= 29.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[2] <= 67.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 82.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[0] <= 24.5) {
                                                    if (x[1] <= 31.5) {
                                                        if (x[2] <= 62.5) {
                                                            if (x[0] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 23.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 62.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 32.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 32.5) {
                                                        if (x[2] <= 62.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 23.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 30.5) {
                                                if (x[2] <= 77.5) {
                                                    if (x[4] <= 15.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 72.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    if (x[4] <= 15.0) {
                                                        if (x[0] <= 24.5) {
                                                            if (x[2] <= 82.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 77.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 31.5) {
                                                            if (x[0] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 67.5) {
                                if (x[1] <= 31.5) {
                                    if (x[4] <= 15.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 22.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 62.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 31.5) {
                                    if (x[0] <= 21.5) {
                                        if (x[1] <= 23.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                if (x[2] <= 85.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[2] <= 92.5) {
                                                if (x[2] <= 82.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        if (x[1] <= 25.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 22.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 23.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    if (x[0] <= 22.5) {
                                                        if (x[1] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 27.5) {
                                                    if (x[0] <= 23.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 23.5) {
                                                            if (x[2] <= 82.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 29.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 77.5) {
                                        if (x[2] <= 72.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #25
                        if (x[0] <= 23.5) {
                            if (x[2] <= 67.5) {
                                if (x[4] <= 15.0) {
                                    if (x[3] <= 97.5) {
                                        if (x[1] <= 30.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 62.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 97.5) {
                                        if (x[0] <= 22.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 30.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 72.5) {
                                    if (x[1] <= 29.5) {
                                        if (x[4] <= 15.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 28.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 20.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                if (x[0] <= 21.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    if (x[1] <= 30.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 82.5) {
                                        if (x[1] <= 31.5) {
                                            if (x[3] <= 97.5) {
                                                if (x[1] <= 28.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 87.5) {
                                            if (x[0] <= 21.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    if (x[3] <= 97.5) {
                                                        if (x[1] <= 27.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            if (x[3] <= 97.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 97.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 24.5) {
                                                if (x[1] <= 23.5) {
                                                    if (x[3] <= 97.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[0] <= 21.5) {
                                                            if (x[3] <= 97.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    if (x[0] <= 21.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 97.5) {
                                                            if (x[0] <= 22.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        if (x[2] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            if (x[2] <= 92.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 97.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 27.5) {
                                if (x[1] <= 25.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 92.5) {
                                        if (x[0] <= 25.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[2] <= 87.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[2] <= 87.5) {
                                                    if (x[3] <= 97.5) {
                                                        if (x[0] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        if (x[2] <= 92.5) {
                                                            if (x[3] <= 97.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 25.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 97.5) {
                                    if (x[2] <= 87.5) {
                                        if (x[3] <= 92.5) {
                                            if (x[0] <= 24.5) {
                                                if (x[1] <= 28.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 30.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 70.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 31.5) {
                                                    if (x[2] <= 70.0) {
                                                        if (x[2] <= 62.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 77.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 82.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[1] <= 32.5) {
                                                            if (x[2] <= 72.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 24.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    if (x[1] <= 30.5) {
                                                        if (x[0] <= 25.5) {
                                                            if (x[2] <= 82.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 80.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 24.5) {
                                                            if (x[2] <= 67.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 92.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 25.5) {
                                                if (x[0] <= 24.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 62.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 28.5) {
                                            if (x[2] <= 82.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                if (x[1] <= 31.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 31.0) {
                                                    if (x[1] <= 29.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 77.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 72.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #26
                        if (x[3] <= 97.5) {
                            if (x[3] <= 92.5) {
                                if (x[1] <= 28.5) {
                                    if (x[0] <= 25.5) {
                                        if (x[2] <= 87.5) {
                                            if (x[1] <= 26.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 15.0) {
                                        if (x[1] <= 31.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 70.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 24.5) {
                                    if (x[2] <= 77.5) {
                                        if (x[0] <= 22.5) {
                                            if (x[2] <= 67.5) {
                                                if (x[4] <= 15.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[1] <= 28.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 20.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 21.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 31.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 30.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 62.5) {
                                                            if (x[0] <= 23.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 30.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 23.5) {
                                                            if (x[2] <= 67.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 67.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    if (x[2] <= 62.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 15.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 87.5) {
                                            if (x[0] <= 23.5) {
                                                if (x[1] <= 27.5) {
                                                    if (x[0] <= 22.5) {
                                                        if (x[1] <= 25.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 82.5) {
                                                        if (x[1] <= 28.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[2] <= 82.5) {
                                                        if (x[1] <= 28.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 30.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 26.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 30.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                if (x[0] <= 22.5) {
                                                    if (x[0] <= 21.5) {
                                                        if (x[1] <= 23.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[1] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 26.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 25.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 26.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[1] <= 27.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 77.5) {
                                        if (x[0] <= 25.5) {
                                            if (x[1] <= 32.5) {
                                                if (x[2] <= 67.5) {
                                                    if (x[2] <= 62.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 25.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[2] <= 82.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        if (x[1] <= 27.5) {
                                                            if (x[1] <= 26.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 30.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 27.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[2] <= 87.5) {
                                                    if (x[1] <= 30.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 27.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 23.5) {
                                if (x[4] <= 15.0) {
                                    if (x[1] <= 28.5) {
                                        if (x[1] <= 27.5) {
                                            if (x[1] <= 24.5) {
                                                if (x[1] <= 23.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 82.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 22.5) {
                                                            if (x[1] <= 25.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 92.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 80.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 72.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 30.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 62.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= 82.5) {
                                        if (x[2] <= 77.5) {
                                            if (x[1] <= 31.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 72.5) {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 29.5) {
                                                if (x[1] <= 28.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 87.5) {
                                            if (x[1] <= 27.5) {
                                                if (x[4] <= 15.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 26.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #27
                        if (x[0] <= 22.5) {
                            if (x[1] <= 24.5) {
                                if (x[2] <= 92.5) {
                                    if (x[1] <= 23.5) {
                                        if (x[2] <= 87.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            if (x[3] <= 97.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 87.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 72.5) {
                                    if (x[3] <= 97.5) {
                                        if (x[2] <= 67.5) {
                                            if (x[4] <= 15.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 28.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        if (x[0] <= 20.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 29.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 29.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        if (x[2] <= 82.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 87.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 87.5) {
                                            if (x[2] <= 82.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 97.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 97.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 92.5) {
                                                    if (x[1] <= 25.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 25.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 24.5) {
                                if (x[3] <= 97.5) {
                                    if (x[1] <= 24.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 23.5) {
                                            if (x[1] <= 25.5) {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 29.0) {
                                                    if (x[1] <= 27.5) {
                                                        if (x[1] <= 26.5) {
                                                            if (x[2] <= 90.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        if (x[2] <= 62.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 67.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 30.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[2] <= 92.5) {
                                                    if (x[3] <= 92.5) {
                                                        if (x[1] <= 28.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[2] <= 70.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    if (x[2] <= 67.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 75.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 28.5) {
                                        if (x[2] <= 82.5) {
                                            if (x[0] <= 23.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                if (x[2] <= 92.5) {
                                                    if (x[1] <= 27.5) {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 26.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 25.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 26.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 31.5) {
                                            if (x[2] <= 77.5) {
                                                if (x[0] <= 23.5) {
                                                    if (x[4] <= 15.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 67.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    if (x[0] <= 23.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 62.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 23.5) {
                                                    if (x[2] <= 77.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 72.5) {
                                                        if (x[2] <= 67.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 30.5) {
                                    if (x[1] <= 27.5) {
                                        if (x[0] <= 25.5) {
                                            if (x[2] <= 87.5) {
                                                if (x[3] <= 92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 15.0) {
                                            if (x[3] <= 92.5) {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 25.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 31.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 92.5) {
                                            if (x[1] <= 32.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[2] <= 62.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 25.5) {
                                                            if (x[2] <= 75.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    if (x[2] <= 77.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #28
                        if (x[3] <= 97.5) {
                            if (x[4] <= 15.0) {
                                if (x[0] <= 22.5) {
                                    if (x[0] <= 20.5) {
                                        if (x[2] <= 87.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            if (x[1] <= 29.5) {
                                                if (x[1] <= 27.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 87.5) {
                                                if (x[1] <= 27.5) {
                                                    if (x[1] <= 25.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 24.5) {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 92.5) {
                                        if (x[0] <= 24.5) {
                                            if (x[0] <= 23.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 25.5) {
                                                if (x[1] <= 27.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 72.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 25.5) {
                                            if (x[1] <= 25.5) {
                                                if (x[0] <= 23.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 24.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 92.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 24.5) {
                                                    if (x[1] <= 32.5) {
                                                        if (x[2] <= 92.5) {
                                                            if (x[1] <= 31.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 23.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 62.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 72.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    if (x[1] <= 30.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 62.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 25.5) {
                                        if (x[2] <= 67.5) {
                                            if (x[1] <= 31.5) {
                                                if (x[0] <= 22.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 92.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 75.0) {
                                                    if (x[0] <= 22.5) {
                                                        if (x[1] <= 28.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 20.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 30.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 29.5) {
                                                        if (x[2] <= 82.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 80.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 23.5) {
                                if (x[1] <= 27.5) {
                                    if (x[2] <= 92.5) {
                                        if (x[1] <= 25.5) {
                                            if (x[0] <= 22.5) {
                                                if (x[1] <= 24.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 26.5) {
                                                if (x[0] <= 22.5) {
                                                    if (x[0] <= 21.5) {
                                                        if (x[2] <= 82.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 24.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 31.5) {
                                        if (x[2] <= 82.5) {
                                            if (x[4] <= 15.0) {
                                                if (x[1] <= 29.5) {
                                                    if (x[0] <= 22.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 30.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 77.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 62.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 31.5) {
                                        if (x[2] <= 77.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 82.5) {
                                                    if (x[1] <= 29.5) {
                                                        if (x[1] <= 28.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            if (x[2] <= 67.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #29
                        if (x[0] <= 23.5) {
                            if (x[3] <= 97.5) {
                                if (x[2] <= 87.5) {
                                    if (x[4] <= 15.0) {
                                        if (x[0] <= 21.5) {
                                            if (x[0] <= 20.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 92.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    if (x[2] <= 62.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 30.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 22.5) {
                                                        if (x[2] <= 75.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 82.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 30.5) {
                                            if (x[1] <= 29.5) {
                                                if (x[1] <= 28.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 20.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    if (x[0] <= 21.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 22.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 67.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 24.5) {
                                        if (x[1] <= 23.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 22.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 25.5) {
                                                if (x[2] <= 92.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 26.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 15.0) {
                                    if (x[2] <= 82.5) {
                                        if (x[0] <= 21.5) {
                                            if (x[2] <= 75.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 70.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 77.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 24.5) {
                                            if (x[1] <= 23.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 22.5) {
                                                if (x[1] <= 25.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 92.5) {
                                                        if (x[0] <= 21.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    if (x[2] <= 87.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 27.5) {
                                                        if (x[1] <= 26.5) {
                                                            if (x[2] <= 92.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 67.5) {
                                        if (x[1] <= 30.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 22.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 92.5) {
                                if (x[2] <= 82.5) {
                                    if (x[0] <= 24.5) {
                                        if (x[4] <= 15.0) {
                                            if (x[1] <= 28.5) {
                                                if (x[3] <= 97.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    if (x[2] <= 67.5) {
                                                        if (x[3] <= 97.5) {
                                                            if (x[2] <= 62.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 62.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 92.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 31.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 67.5) {
                                                if (x[1] <= 31.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 29.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            if (x[1] <= 32.5) {
                                                if (x[2] <= 62.5) {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 15.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 15.0) {
                                                if (x[2] <= 77.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 31.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 87.5) {
                                        if (x[1] <= 29.5) {
                                            if (x[0] <= 24.5) {
                                                if (x[4] <= 15.0) {
                                                    if (x[1] <= 27.5) {
                                                        if (x[1] <= 26.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 97.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 97.5) {
                                                            if (x[3] <= 92.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    if (x[0] <= 25.5) {
                                                        if (x[1] <= 27.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[4] <= 15.0) {
                                                            if (x[1] <= 26.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 15.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 24.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 24.5) {
                                            if (x[1] <= 27.5) {
                                                if (x[3] <= 97.5) {
                                                    if (x[1] <= 26.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #30
                        if (x[3] <= 97.5) {
                            if (x[4] <= 15.0) {
                                if (x[1] <= 27.5) {
                                    if (x[2] <= 82.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[2] <= 92.5) {
                                                if (x[2] <= 87.5) {
                                                    if (x[0] <= 24.5) {
                                                        if (x[1] <= 25.5) {
                                                            if (x[1] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 22.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 23.5) {
                                                        if (x[0] <= 22.5) {
                                                            if (x[1] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 23.5) {
                                                if (x[2] <= 87.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 92.5) {
                                                    if (x[0] <= 25.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 24.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 92.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 92.5) {
                                        if (x[1] <= 28.5) {
                                            if (x[0] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 31.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 30.5) {
                                            if (x[0] <= 25.5) {
                                                if (x[2] <= 72.5) {
                                                    if (x[2] <= 67.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 28.5) {
                                                        if (x[0] <= 23.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 82.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 82.5) {
                                                            if (x[1] <= 29.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 87.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 77.5) {
                                                if (x[0] <= 23.5) {
                                                    if (x[2] <= 62.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 25.5) {
                                                        if (x[1] <= 31.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 24.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    if (x[0] <= 25.5) {
                                                        if (x[0] <= 24.5) {
                                                            if (x[2] <= 82.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 30.5) {
                                    if (x[2] <= 77.5) {
                                        if (x[1] <= 28.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 24.5) {
                                                if (x[0] <= 22.5) {
                                                    if (x[0] <= 20.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 21.5) {
                                                            if (x[1] <= 29.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 27.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 25.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 67.5) {
                                        if (x[2] <= 62.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 22.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 23.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 92.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 77.5) {
                                                if (x[0] <= 23.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 23.5) {
                                if (x[1] <= 24.5) {
                                    if (x[1] <= 23.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 92.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 28.5) {
                                        if (x[0] <= 22.5) {
                                            if (x[1] <= 25.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 92.5) {
                                                    if (x[2] <= 82.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[0] <= 21.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 82.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 92.5) {
                                                    if (x[1] <= 26.5) {
                                                        if (x[2] <= 87.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 25.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            if (x[1] <= 27.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 25.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 67.5) {
                                            if (x[1] <= 30.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[4] <= 15.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 30.5) {
                                                if (x[2] <= 72.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 31.5) {
                                                    if (x[2] <= 72.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 77.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 67.5) {
                                    if (x[1] <= 31.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 82.5) {
                                        if (x[1] <= 29.5) {
                                            if (x[1] <= 28.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 72.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 77.5) {
                                                    if (x[1] <= 31.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 87.5) {
                                            if (x[1] <= 27.5) {
                                                if (x[4] <= 15.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 26.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "label 2";
                            case 1:
                            return "label 0";
                            case 2:
                            return "label 1";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }
