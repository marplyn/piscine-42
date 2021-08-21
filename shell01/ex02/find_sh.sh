#!/bin/bash
find . -type f -name "*\.sh" -exec basename {} \; | rev | cut -c 4- | rev
