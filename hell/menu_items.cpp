#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const ABel::MenuItem ABel::STUDY_SUMM = {
    "1 - Хочу научиться складывать!", ABel::study_summ, &ABel::STUDY
};
const ABel::MenuItem ABel::STUDY_SUBSTRACT = {
    "2 - Хочу научиться вычитать!", ABel::study_substract, &ABel::STUDY
};
const ABel::MenuItem ABel::STUDY_MULTIPLY = {
    "3 - Хочу научиться умножать!", ABel::study_multiply, &ABel::STUDY
};
const ABel::MenuItem ABel::STUDY_DIVIDE = {
    "4 - Хочу научиться делить!", ABel::study_divide, &ABel::STUDY
};
const ABel::MenuItem ABel::STUDY_GO_BACK = {
    "0 - Выйти в главное меню", ABel::study_go_back, &ABel::STUDY
};

namespace {
    const ABel::MenuItem* const study_children[] = {
        &ABel::STUDY_GO_BACK,
        &ABel::STUDY_SUMM,
        &ABel::STUDY_SUBSTRACT,
        &ABel::STUDY_MULTIPLY,
        &ABel::STUDY_DIVIDE
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const ABel::MenuItem ABel::STUDY = {
    "1 - Хочу учиться математике!", ABel::show_menu, &ABel::MAIN, study_children, study_size
};
const ABel::MenuItem ABel::EXIT = {
    "0 - Я лучше пойду полежу...", ABel::exit, &ABel::MAIN
};

namespace {
    const ABel::MenuItem* const main_children[] = {
        &ABel::EXIT,
        &ABel::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const ABel::MenuItem ABel::MAIN = {
    nullptr, ABel::show_menu, nullptr, main_children, main_size
};