.PHONY: clean All

All:
	@echo "----------Building project:[ A_Stones_on_the_Table - Debug ]----------"
	@cd "A_Stones_on_the_Table" && "$(MAKE)" -f  "A_Stones_on_the_Table.mk"
clean:
	@echo "----------Cleaning project:[ A_Stones_on_the_Table - Debug ]----------"
	@cd "A_Stones_on_the_Table" && "$(MAKE)" -f  "A_Stones_on_the_Table.mk" clean
