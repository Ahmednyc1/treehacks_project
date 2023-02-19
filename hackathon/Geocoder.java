import ai.openai.api.APIException;
import ai.openai.api.models.CompletionRequest;
import ai.openai.api.models.CompletionResponse;
import ai.openai.api.models.Engine;

import java.util.Collections;

public class Geocoder {
    public static void main(String[] args) {
        // Set up the OpenAI API client
        OpenAI api = new OpenAI("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");

        // Get the ChatGPT engine ID
        Engine engine;
        try {
            engine = api.engine().retrieve("davinci").execute();
        } catch (APIException e) {
            System.err.println("Failed to retrieve engine: " + e.getMessage());
            return;
        }

        // Set up the CompletionRequest
        CompletionRequest request = new CompletionRequest.Builder()
                .prompt("Hello, ChatGPT!")
                .maxTokens(50)
                .engine(engine.getId())
                .temperature(0.5)
                .n(1)
                .stop(Collections.singletonList("\n"))
                .build();

        // Generate a response from ChatGPT
        CompletionResponse response;
        try {
            response = api.completions().create(request).execute();
        } catch (APIException e) {
            System.err.println("Failed to generate response: " + e.getMessage());
            return;
        }

        // Print the response text
        String message = response.getChoices().get(0).getText();
        System.out.println(message);
    }
}
